using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace EightBall
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class Window1 : Window
    {
        public Window1()
        {
            InitializeComponent();
        }

        private void cmdAnswer_Click(object sender, RoutedEventArgs e)
        {
            Console.WriteLine("{0} \n",e.ToString());
            this.Cursor = Cursors.Wait;
            System.Threading.Thread.Sleep(TimeSpan.FromSeconds(0.1));
            txtAnswer.Text = txtQuestion.Text;
            this.Cursor = null;
        }
    }
}
