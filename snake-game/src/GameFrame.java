import javax.swing.JFrame;

public class GameFrame extends JFrame{

    //constructor for GameFrame
    GameFrame() {

        //add a new gamepanel
        this.add(new GamePanel());


        this.setTitle("Mouse");
        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        this.setResizable(false);
        this.pack();
        this.setVisible(true);
        this.setLocationRelativeTo(null);

    }
    
}
