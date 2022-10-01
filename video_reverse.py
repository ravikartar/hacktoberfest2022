#import the library
import cv2

# capture video instances
cap=cv2.VideoCapture('trial.avi')

#properties of videos

# total no. of frames in video
frames=cap.get(cv2.CAP_PROP_FRAME_COUNT)

#frames per second of video for video capturing
fps=cap.get(cv2.CAP_PROP_FPS)

height=cap.get(cv2.CAP_PROP_FRAME_HEIGHT)
width=cap.get(cv2.CAP_PROP_FRAME_WIDTH)

#for writing a video
fourcc=cv2.VideoWriter_fourcc(*'MJPG')
out=cv2.VideoWriter('reversedtrial.avi',fourcc,fps,(int(width*0.5),int(height*0.5)))

print("No. of frames are : {}".format(frames))
print("FPS is : {}".format(fps))

# now for reversing we need to get frames from last 
# and then we add to a video ,decreasing frames index from n-1 to 0.

frame_index=frames-1

# checking if the video instance is ready
if(cap.isOpened()):

    ## reading till end of the video
    while(frame_index!=0):

        # we set the current frame position to last frame
        cap.set(cv2.CAP_PROP_POS_FRAMES,frame_index)

        ret,frame=cap.read()

        #resize the frame so that it can be processed easily
        #and again stored in frame itself 
        frame=cv2.resize(frame,(int(width*0.5),int(height*0.5)))

        #optional : to show the reversing video while execution
        #cv2.imshow('winname',frame)

        #writing of a reversed video
        out.write(frame)
        # decrementing frame index at each step
        frame_index=frame_index-1

        ## optional : printing progress of video on terminal
        if(frame_index%100==0):
            print(frame_index)

        ## if we want to show video on console
        #if(cv2.waitKey(2)==ord('q')):
        #       break
        
out.release()
cap.release()
cv2.destroyAllWindows()
