#include "InchiriereFilme_CosCumparaturi_InterfataGrafica.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	RepositoryFile repoFile{ "Filme.txt", 0 };
	Service srv{ repoFile };
	FilmeGUI gui{ srv };
	CosGUI guiCos{ srv };

	gui.show();

	return a.exec();
}