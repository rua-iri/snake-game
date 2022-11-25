import java.awt.Window;


public class CloseFrame extends Thread{
 
    CloseFrame() {

        

    }

    public void run() {

        try {
            CloseFrame.sleep(3000);

            Window[] windows = Window.getWindows();

            for(Window w : windows) {
                w.dispose();
            }

        } catch (InterruptedException e) {
            e.printStackTrace();
        }

    }



}
