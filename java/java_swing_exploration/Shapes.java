import java.awt.*;
import java.awt.geom.*;
import javax.swing.*;
import java.awt.Graphics;
import java.awt.Graphics2D;

public class Shapes extends JPanel {
  @Override
  protected void paintComponent(Graphics g) {
    super.paintComponent(g);
    Graphics2D g2 = (Graphics2D) g;
    g2.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

    //Draw Square
    Rectangle2D.Double square = new Rectangle2D.Double(0,0,5,5);
    g2.setColor(Color.BLUE);
    g2.fill(square);
  }

  public static void main(String[] args) {
    SwingUtilities.invokeLater(() -> {
      JFrame frame = new JFrame("Java Swing with Geom test");
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      frame.add(new Shapes());
      frame.setSize(400,400);
      frame.getContentPane().setBackground(Color.GRAY);
      frame.setLocationRelativeTo(null);
      frame.setVisible(true);
    });
  }
}

