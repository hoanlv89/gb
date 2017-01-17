using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace StyxTest
{
    public class StyxPacketInfo
    {
        public System.Net.Sockets.Socket socket = null;
        public const int HEADER_SIZE = 5;
        public enum STATE { header, packet };
        public byte[] headerBuffer = new byte[HEADER_SIZE];
        public byte[] packetBuffer;
        public Int32 packetLength;
        public byte classId;
        public bool complete = false;
        public STATE state;
        public int bytesLeft;

        public void readHeader()
        {
            MemoryStream memStream = new MemoryStream(headerBuffer);
            BinaryReader reader = new BinaryReader(memStream);
            packetLength = System.Net.IPAddress.NetworkToHostOrder(reader.ReadInt32());
            classId = reader.ReadByte();
            packetBuffer = new byte[packetLength];
            MemoryStream packetStream = new MemoryStream(packetBuffer);
            BinaryWriter writer = new BinaryWriter(packetStream);
            writer.Write(System.Net.IPAddress.HostToNetworkOrder(packetLength));
            writer.Write(classId);
            bytesLeft = packetLength - HEADER_SIZE;
        }
    }

    
}
