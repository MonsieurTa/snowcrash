import SimpleHTTPServer
import SocketServer
import logging
import sys

PORT = 6969

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s: %(message)s',
                    )

class EchoRequestHandler(SocketServer.BaseRequestHandler):
    def handle(self):
        self.logger.debug('handle')
        data = self.request.recv(1024)
        self.logger.debug('recv()->"%s"', data)
        self.request.send(data)
        return

httpd = SocketServer.TCPServer(("", PORT), EchoRequestHandler)

print "serving at port", PORT
httpd.serve_forever()
