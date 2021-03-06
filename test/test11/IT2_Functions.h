#ifndef _FUNC_INC_H_
#define _FUNC_INC_H_

#include <proto/intuition.h>
#include <proto/graphics.h>
#include <proto/diskfont.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include "IT2_Types.h"

void delay(uint16 time);
int it_round(double x);

uint8 GETCIVFLAG(uint8 CivVar);
uint8 GETCIVVAR(uint8 CivFlag);
char* GETCIVADJ(uint8 CivVar);
char* GETCIVNAME(uint8 CivVar);
char* GETMYADJ(uint8 CivFlag, BOOL* DconDone);

void AUTOSHIPTRAVEL(uint8 ActSys, uint8 Mode, r_ShipHeader* ShipPtr);
void AUTOVERHANDLUNG(uint8 CivFlag1,uint8 CivFlag2,uint8 ActSys,uint8 Mode);
BOOL AUTOWATERTRANSPORT(r_PlanetHeader* MyPlanetHeader, r_ShipHeader* MyShipPtr, uint8 ActSys);

// >>> DISKMENU
uint8 BIGSHIPFIGHT(r_ShipHeader* Ship1, r_ShipHeader* Ship2, uint8 Mode, uint8 ActSys);
uint8 STARTBIGSHIPFIGHT(r_ShipHeader* Ship1, r_ShipHeader* Ship2, uint8 Mode, uint8 ActSys);
// <<<

void BOX(struct Screen* XScreen, uint16 Left, uint16 Top, uint16 Right, uint16 Bottom);
void CEBORCATTACK(uint8 ActPlayerFlag);
void CHECKPLANET(r_PlanetHeader* MyPlanetHeader);
void CHECKPROJECTS(r_PlanetHeader* PlanetPtr, uint8 NewOwner);
BOOL CHECKSUN(r_ShipHeader* ShipPtr);
void CLEARINTUITION();
void CLICKRECT(struct Screen* XScreen, uint16 Left, uint16 Top, uint16 Right, uint16 Bottom, uint8 Color);
void CLOCK();
void CLOSEMYSCREENS();
void CREATECIVILWAR(uint8 CivVar);
void CREATEJAHADR(uint8 ActPlayer);
BOOL CREATEMAQUESSHIP(uint8 SysID, uint8 ShipID);
void CREATENEWSYSTEM(uint8 ActSys,uint8 CivVar);
void CREATEPANIC(r_PlanetHeader* PPtr, uint8 ActSys, uint8 PlanetNum);
void CREATEPATHS();
void DECREASE(uint8 ActSys, r_PlanetHeader* PPtr);
// >>> DISKMENU
void LOADSHIPS(r_ShipHeader* ShipPtr, BPTR FHandle);
void SAVESHIPS(r_ShipHeader* ShipPtr, BPTR FHandle);
void GETSAVENAME(char* Title, char* SName);
void ENCODEDATA();
void DECODEDATA();
void NOMEMMESSAGE();
BOOL DISKMENU(uint8 Auto);
// <<<
BOOL DISPLAYIMAGE(char* Fn, int LEdge, int TEdge, int Width, int Height, int Depth, struct Screen* XScreen, uint8 CacheNum);
void DISPLAYLOGO(uint8 ActPlayer, uint16 LEdge, uint16 TEdge);
void DISPLAYSTATE();
void DISPLAYTECH(uint8 TechID, uint8 CivVar1);
void DOHUMANITY();
void DOINFLATION(uint8 ActPlayer);
void DOSSIER(BOOL Cheat);
void DOWORMHANDLING(r_ShipHeader* MyShipPtr, uint8 ActSys, BOOL Visible);
void DRAWGAD(uint16 GadID, uint16 GadSelect);
// >>> DRAWMOVINGSHIP
void FASTREFRESH(sint16 OldX, sint16 OldY, r_ShipHeader* XCludeShip);
void DRAWMOVINGSHIP(r_ShipHeader* MyShipPtr, uint8 ActSys);
// <<<
void DRAWRECT(uint32 x, uint32 y, r_ShipHeader* MyShipPtr);
void DRAWSTARS(uint8 Mode, uint8 ActPlayer);
void DRAWSYSTEM(uint8 Mode, uint8 ActSys, r_ShipHeader* ActShipPtr);
void ENDSEQUENZ(sint16 Mode);
BOOL EXISTSPLANET(uint8 CivVar, uint8 ActSys, uint8 Mode);
void FADESTARGATE(uint8 SysID, uint8 ActSys, r_ShipHeader* MyShipPtr);
void FINANZEN();
void FINANZEN_WRITEDATA(uint8 Mode);
void FINDENEMYOBJECT(uint8 ActSys, r_ShipHeader* ShipPtr);
void FINDENEMYSYSTEM(uint8 ActSys, uint8 CivVar, r_ShipHeader* ShipPtr);
BOOL FINDMAQUESSHIP(uint8 ActSys, r_ShipHeader* MyShipPtr);
uint8 FINDMONEYPLANET(uint8 CivFlag, uint8 CivVar, char* s);
uint8 FINDNEXTPLANET(uint8 ActSys, r_ShipHeader* ShipPtr);
BOOL FINDOBJECT(uint8 ActSys, sint16 GetX, sint16 GetY, void* ExcludeObj);
uint8 FIRSTMENU();
void FORSCHUNG();
void FREESYSTEMMEMORY();
void GAMEEXIT();
void GETPLAYERNAME(uint8 ActPlayer, char* PName);
uint8 GETRAWCODE();
APTR GETTHESOUND(uint8 MID);
uint8 GOTONEXTPLANET(uint8 ActSys, r_ShipHeader* MyShipPtr);
uint8 GOTONEXTSYSTEM(uint8 ActSys, r_ShipHeader* ShipPtr);
void GOTOPEACE(uint8 CivVar1, uint8 CivVar2);
void GOTOWAR(uint8 CivFlag1, uint8 CivFlag2);
// >>> HANDLEKNOWNPLANET
void WRITEPROJECTDATA(r_PlanetHeader* MyPlanetHeader, ByteArr42* ActPProjects);
void HANDLEKNOWNPLANET(uint8 ActSys, uint8 Mode, r_PlanetHeader* PlanetPtr);
// <<<
// >>> HANDLESYSTEM
uint8 HANDLESYSTEM_DRAWSHIPS(sint8 Mode, uint8 stSys, uint8* PSys, r_ShipHeader** ShipPos);
uint8 DRAWPLANETS(uint8 CivFlag, uint8 stSys, uint8* PSys, uint8* PNum, uint8* PCol);
void SEARCHOBJECT(uint8 ActSys);
void HANDLESYSTEM(uint8 ActSys, r_ShipHeader* ShipPtr);
// <<<
// >>> HIGHSCORE
void CREATEHIGHSCORE();
uint8 GETCOLOR(uint8 Col);
void HIGHSCORE();
// <<<
void INFORMUSER();
BOOL INITDESK(uint8 Mode);
BOOL INITLANG();
void INITMENU();
void INITSCREEN(uint8 Mode);
void INITSOUNDS();
BOOL INITSTARS();
void INITSTDTAGS();
void INITVARS();
void KILLFLEET(r_ShipHeader* MyShipPtr);
void KLICKGAD(uint16 x, uint16 y);
void LINKSHIP(r_ShipHeader* SPtr, r_ShipHeader* TPtr, uint8 Mode);
void LINKTOORBIT(r_PlanetHeader* MyPlanetHeader, r_ShipHeader* MyShipPtr, uint8 ActSys);
void LOADMOD(char* FName, uint8 MID);
void LOADSOUND(char* FName, uint8 SID);
// >>> MAININTRO
void SETDARKCOLOR(char* FName, r_Col* Colors);
void INTROEXIT(PLANEPTR MyRastPtr);
void ROTATEpX(uint8 k);
void ROTATEpY(uint8 k);
void ROTATEpZ(uint8 k);
void ROTATEnX(uint8 k);
void ROTATEnY(uint8 k);
void ROTATEnZ(uint8 k);
void FLY(uint8 k, double Factor);
void GREATEFFECT(uint8 Objects, r_Col* Colors);
BOOL LOADSOUNDS();
void MAIN_FNC();
void MAININTRO();
// <<<
void MAKEBORDER(struct Screen* XScreen, uint16 LEdge, uint16 TEdge, uint16 REdge, uint16 BEdge, uint8 Col1, uint8 Col2, uint8 Darken);
// >>> MILITAER
void DRAWDATA(uint8 BSet);
void MILITAER();
// <<<
// >>> MOVESHIP
void MOVESHIP(uint8 ActSys, r_ShipHeader* ShipPtr, BOOL Visible);
void MOVESHIP_DRAWSCENE(uint8 ActSys, r_ShipHeader* MyShipPtr);
void MOVESHIP_EXPLODE(uint8 ActSys, r_ShipHeader* MyShipPtr);
void MOVESHIP_SMALLANDING(r_PlanetHeader* PPtr, r_ShipHeader* SPtr, uint8 ActSys);
// <<<

struct Screen* OPENCINEMA(uint8 Depth);
BOOL OPENMAINSCREENS();
BPTR OPENSMOOTH(char* FName, uint32 FMode);
// >>> OPTIONMENU
void CHECKGADS(uint8 GadID);
void OPTIONMENU(uint8 Mode);
// <<<
// >>> ORBITINFO
int DRAWSHIPS(int i, char (*ShipNames)[15], r_ShipHeader* MyShipPtr);
void SETFLEETPOSITION(uint8 ActSys, r_ShipHeader* StShipPtr, r_ShipHeader* MyShipPtr);
void ORBITINFO(r_ShipHeader* StShipPtr, char* ReqText, uint8 ActSys, sint16 XPosX, sint16 XPosY);
// <<<
void PEACEINFO(uint8 CivVar1, uint8 CivVar2, uint8 CivFlag1, uint8 CivFlag2);
BOOL PLANETHANDLING(uint8 ActSys, r_ShipHeader* _MyShipPtr);
void PLANETINFO(uint8 ActSys);
void PLAYERHIGHSCORE(uint8 ActPlayer);
void PLAYERJINGLE(uint8 JingleID);
void PLAYSOUND(uint8 SID, uint16 SRate);
void PRINTGLOBALINFOS(uint8 ActPlayer);
void PROJEKTE();
void PUMPUPTHELEVEL();
void QUOTEPICARD();
BOOL RAWLOADIMAGE(char* Fn, int LEdge, int TEdge, int Width, int Height, int Depth, ITBitMap* DestBitMap);
void RECT(struct Screen* XScreen, uint16 Color, uint16 LEdge, uint16 TEdge, uint16 REdge, uint16 BEdge);
void REFRESHDISPLAY();
void REFRESHSHIPS(r_ShipHeader* ShipPtr, uint8 SysID, uint8 Mode);
void REGIERUNG();
void REMOVEPLAYER(uint8 ActPlayer);
void REQUEST(char* s1, char* s2, uint8 c1, uint8 c2);
void ROTATEPLANETS(uint8 ActSys);
uint8 SETCOLOR(struct Screen* XScreen, char* FName);
BOOL SETNEWPLANETOWNER(r_PlanetHeader* MyPlanetHeader, r_PlanetHeader* OldPlanet, sint16* TheProject, uint8 ActSys, char* s1, char* s2, BOOL* PlanetLose);
void SETWORLDCOLORS();
// >>> SHIPINFO
void SHIPINFO_WRITEDATA(r_ShipHeader* MyShipPtr);
void SHIPINFO(uint8 ActSys);
// <<<
void SMALLGAMEEXIT();
// >>> STARDESASTER
void FUCKSYSTEM(uint8 ActSys);
void STARDESASTER(uint8 ActSys, r_ShipHeader* ShipPtr);
// <<<
void STARLANDING(r_PlanetHeader* PPtr, r_ShipHeader* SPtr, uint8 ActSys);
// >>> STARTROTATEPLANETS
void CREATEINFOBOX();
void STARTROTATEPLANETS();
// <<<
void STATISTIK();
void STOPCIVILWAR(uint8 EndText);
void SUPPORTCIVI(uint32 XValue);
void SWITCHDISPLAY();
void SYSINFO(uint8 SysID, uint8 ThePlayerFlag);
void SYSTEMINFO(uint8 ActSys);
void SYSTEMTOENEMY(uint8 ActSys, uint8 NewOwner, uint8 OldOwner);
BOOL TAKETECH(uint8 CivFlag1, uint8 CivFlag2);
void UNPACK(uint8* Anfang, uint8* PackedD, uint32 Laenge, uint8 Mode);
// >>> VERHANDLUNG ---
void VERHANDLUNG_INIT(uint8 CivFlag, char* CivStr, uint8 Mode);
void VERHANDLUNG(uint8 CivFlag, uint8 Mode);
// <<<
void WAITLOOP(BOOL BOOL_var);
// >>> WORMHOLE ---
void WORMHOLE_LOADSOUND(char* FName, uint8 SID);
void WORMHOLE_INITSOUNDS();
BOOL WORMHOLE_INITIMAGES();
void TRAVEL();
BOOL SMALLWORMFLIGHT(r_ShipHeader* MyShipPtr);
BOOL WORMEXIT(BOOL _WORMEXIT, r_ShipHeader* MyShipPtr, uint8 ActSys);
BOOL WORMFLIGHT(r_ShipHeader* ShipPtr, uint8 ActSys);
BOOL WORMHOLE(r_ShipHeader* ShipPtr, uint8 ActSys);
// <<<
void WRITE(uint16 IPosX, uint16 IPosY, uint8 Color, uint8 DMode, struct Screen* XScreen, uint8 TA, char* WText);
void WRITEGALAXYDATA(uint8 ActSys, uint8 ShipMaxMove);


#endif
