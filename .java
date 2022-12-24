import java.io.*;
import java.lang.*;

public class LongToByte {
	public static void main(String[] args) throws IOException{
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
			System.out.println("Enter the long value:");
			String s = bf.readLine();
			long num = Long.parseLong(s);
			byte bValue = (byte) num;
			System.out.println("Byte is:"+ num);
	}
}