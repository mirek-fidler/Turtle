#include <Turtle/Turtle.h>

// Try connecting to "localhost:8888" via your web browser.

using namespace Upp;

void AppMainLoop()
{
	PromptOK("Hello, world!");
}

CONSOLE_APP_MAIN
{

#ifdef _DEBUG
	TurtleServer::DebugMode();
#endif

	// MemoryLimitKb(100000000); // Can aid preventing DDoS attacks.

	TurtleServer guiserver;
	guiserver.Host("localhost");
	guiserver.HtmlPort(8888);
	guiserver.MaxConnections(100);
	RunTurtleGui(guiserver, AppMainLoop);
}
