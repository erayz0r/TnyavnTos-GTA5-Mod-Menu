#include "game_data.hpp"

namespace Cheat
{
	const std::vector<unsigned long> game_data::VehicleModels = {
	0xB779A091, // adder
	0x4C80EB0E, // airbus
	0x5D0AAC8F, // airtug
	0x46699F47, // akula
	0x63ABADE7, // akuma
	0xEA313705, // alkonost
	0x2DB8D1AA, // alpha
	0xA52F6866, // alphaz1
	0x45D56ADA, // ambulance
	0x31F0B376, // annihilator
	0x11962E49, // annihilator2
	0x2189D250, // apc
	0x97E5533,	// ardent
	0xB8081009, // armytanker
	0xA7FF33F5, // armytrailer
	0x9E6B14D6, // armytrailer2
	0x42ACA95F, // asbo
	0x94204D89, // asea
	0x9441D8D5, // asea2
	0x8E9254FB, // asterope
	0x258C9364, // astron
	0xED552C74, // autarch
	0x81E38F7F, // avarus
	0x81BD2ED0, // avenger
	0x18606535, // avenger2
	0x9A474B5E, // avisa
	0x806B9CC3, // bagger
	0xE82AE656, // baletrailer
	0xCFCA3668, // baller
	0x8852855,	// baller2
	0x6FF0F727, // baller3
	0x25CBE2E2, // baller4
	0x1C09CF5E, // baller5
	0x27B4E6B0, // baller6
	0x1573422D, // baller7
	0xC1E908D2, // banshee
	0x25C5AF13, // banshee2
	0xCEEA3F4B, // barracks
	0x4008EABB, // barracks2
	0x2592B5CF, // barracks3
	0xF34DFB25, // barrage
	0xF9300CC5, // bati
	0xCADD5D2D, // bati2
	0x7A61B330, // benson
	0x6CBD1D6D, // besra
	0x4BFCF28B, // bestiagts
	0x5283265,	// bf400
	0x432AA566, // bfinjection
	0x32B91AE8, // biff
	0xEB298297, // bifta
	0xFEFD644F, // bison
	0x7B8297C5, // bison2
	0x67B3F020, // bison3
	0x32B29A4B, // bjxl
	0xB820ED5E, // blade
	0x8125BCF9, // blazer
	0xFD231729, // blazer2
	0xB44F0582, // blazer3
	0xE5BA6858, // blazer4
	0xA1355F67, // blazer5
	0xF7004C86, // blimp
	0xDB6B4924, // blimp2
	0xEDA4ED97, // blimp3
	0xEB70965F, // blista
	0x3DEE5EDA, // blista2
	0xDCBC1C3B, // blista3
	0x43779C54, // bmx
	0x1F3D44B5, // boattrailer
	0x3FC5D440, // bobcatxl
	0xAA699BB6, // bodhi2
	0xFE0A508C, // bombushka
	0x898ECCEA, // boxville
	0xF21B33BE, // boxville2
	0x7405E08,	// boxville3
	0x1A79847A, // boxville4
	0x28AD20E1, // boxville5
	0xA7CE1BC5, // brawler
	0xEDC6F847, // brickade
	0x5C55CB39, // brioso
	0x55365079, // brioso2
	0xE827DE,	// brioso3
	0x27D79225, // bruiser
	0x9B065C9E, // bruiser2
	0x8644331A, // bruiser3
	0x7F81A829, // brutus
	0x8F49AE28, // brutus2
	0x798682A2, // brutus3
	0x6FF6914,	// btype
	0xCE6B35A4, // btype2
	0xDC19D101, // btype3
	0xD756460C, // buccaneer
	0xC397F748, // buccaneer2
	0xEDD516C6, // buffalo
	0x2BEC3CBE, // buffalo2
	0xE2C013E,	// buffalo3
	0xDB0C9B04, // buffalo4
	0x7074F39D, // bulldozer
	0x9AE6DDA1, // bullet
	0xAFBB2CA4, // burrito
	0xC9E8FF76, // burrito2
	0x98171BD3, // burrito3
	0x353B561D, // burrito4
	0x437CF2A0, // burrito5
	0xD577C962, // bus
	0x2F03547B, // buzzard
	0x2C75F0DD, // buzzard2
	0xC6C3242D, // cablecar
	0x44623884, // caddy
	0xDFF0594C, // caddy2
	0xD227BDBB, // caddy3
	0xB8D657AD, // calico
	0x6FD95F68, // camper
	0x4ABEBF23, // caracara
	0xAF966F3C, // caracara2
	0x7B8AB45F, // carbonizzare
	0xABB0C0,	// carbonrs
	0xFCFCB68B, // cargobob
	0x60A7EA10, // cargobob2
	0x53174EEF, // cargobob3
	0x78BC1A3C, // cargobob4
	0x15F27762, // cargoplane
	0x3822BDFE, // casco
	0x779F23AA, // cavalcade
	0xD0EB2BE5, // cavalcade2
	0xD039510B, // cerberus
	0x287FA449, // cerberus2
	0x71D3B6F0, // cerberus3
	0xC972A155, // champion
	0xC514AAE0, // cheburek
	0xB1D95DA0, // cheetah
	0xD4E5F4D,	// cheetah2
	0xD6BC7523, // chernobog
	0x675ED7,	// chimera
	0x14D69010, // chino
	0xAED64A63, // chino2
	0xA4F52C13, // cinquemila
	0x17420102, // cliffhanger
	0xA29F78B0, // clique
	0x82E47E85, // club
	0x84718D34, // coach
	0x360A438E, // cog55
	0x29FCD3E4, // cog552
	0x13B57D8A, // cogcabrio
	0x86FE0B60, // cognoscenti
	0xDBF2D57A, // cognoscenti2
	0xC1AE4D16, // comet2
	0x877358AD, // comet3
	0x5D1903F9, // comet4
	0x276D98A3, // comet5
	0x991EFC04, // comet6
	0x440851D8, // comet7
	0xE384DD25, // conada
	0x28B67ACA, // contender
	0x67BC037,	// coquette
	0x3C4E2113, // coquette2
	0x2EC385FE, // coquette3
	0x98F65A5E, // coquette4
	0xD3046147, // corsita
	0x1ABA13B5, // cruiser
	0x132D5A1A, // crusader
	0xD9927FE3, // cuban800
	0xC3FBA120, // cutter
	0x52FF9437, // cyclone
	0x68A5D1EF, // cypher
	0x77934CEE, // daemon
	0xAC4E93C9, // daemon2
	0xFE5F0722, // deathbike
	0x93F09558, // deathbike2
	0xAE12C99C, // deathbike3
	0x30FF0190, // defiler
	0x5B531351, // deity
	0x586765FB, // deluxo
	0x5EE005DA, // deveste
	0x4C3FFF49, // deviant
	0xF1B44F44, // diablous
	0x6ABDF65E, // diablous2
	0xBC993509, // dilettante
	0x64430650, // dilettante2
	0x3D961290, // dinghy
	0x107F392C, // dinghy2
	0x1E5E54EA, // dinghy3
	0x33B47F96, // dinghy4
	0xC58DA34A, // dinghy5
	0x698521E3, // dloader
	0x806EFBEE, // docktrailer
	0xCB44B1CA, // docktug
	0xCA495705, // dodo
	0x4CE68AC,	// dominator
	0xC96B73D9, // dominator2
	0xC52C6B93, // dominator3
	0xD6FB0F30, // dominator4
	0xAE0A3D4F, // dominator5
	0xB2E046FB, // dominator6
	0x196F9418, // dominator7
	0x2BE8B90A, // dominator8
	0x9C669788, // double
	0x28EAB80F, // drafter
	0xD235A4A6, // draugur
	0x462FE277, // dubsta
	0xE882E5F6, // dubsta2
	0xB6410173, // dubsta3
	0x2B26F456, // dukes
	0xEC8F7094, // dukes2
	0x7F3415E3, // dukes3
	0x810369E2, // dump
	0x9CF21E0F, // dune
	0x1FD824AF, // dune2
	0x711D4738, // dune3
	0xCEB28249, // dune4
	0xED62BFA9, // dune5
	0x39D6779E, // duster
	0x127E90D5, // dynasty
	0xBBA2261,	// elegy
	0xDE3D9D22, // elegy2
	0xB472D2B5, // ellie
	0x4EE74355, // emerus
	0xD7278283, // emperor
	0x8FC3AADC, // emperor2
	0xB5FCF74E, // emperor3
	0x6882FA73, // enduro
	0x8198AEDC, // entity2
	0xB2FE5CF9, // entityxf
	0x794CB30C, // esskey
	0x7980BDD5, // euros
	0x97553C28, // everon
	0xFFB15B5E, // exemplar
	0xDCBCBE48, // f620
	0x81A9CDDF, // faction
	0x95466BDB, // faction2
	0x866BCE26, // faction3
	0x6068AD86, // fagaloa
	0x9229E4EB, // faggio
	0x350D1AB,	// faggio2
	0xB328B188, // faggio3
	0x432EA949, // fbi
	0x9DC66994, // fbi2
	0x25676EAF, // fcr
	0xD2D5E00E, // fcr2
	0xE8A8BDA8, // felon
	0xFAAD85EE, // felon2
	0x8911B9F5, // feltzer2
	0xA29D6D10, // feltzer3
	0x73920F8E, // firetruk
	0xCE23D3BF, // fixter
	0xB4F32118, // flashgt
	0x50B0215A, // flatbed
	0x5502626C, // fmj
	0x58E49664, // forklift
	0x1446590A, // formula
	0x8B213907, // formula2
	0xBC32A33B, // fq2
	0xFCC2F483, // freecrawler
	0x3D6AAA9B, // freight
	0xAFD22A6,	// freightcar
	0xBDEC3D99, // freightcar2
	0x36DCFF98, // freightcont1
	0xE512E79,	// freightcont2
	0x264D9262, // freightgrain
	0xD1ABB666, // freighttrailer
	0x2C634FBD, // frogger
	0x742E9AC0, // frogger2
	0x71CB2FFB, // fugitive
	0x3944D5A0, // furia
	0xBF1691E0, // furoregt
	0x1DC0BA53, // fusilade
	0x7836CE2F, // futo
	0xA6297CC8, // futo2
	0x2C2C2324, // gargoyle
	0x94B395C5, // gauntlet
	0x14D22159, // gauntlet2
	0x2B0C4DCD, // gauntlet3
	0x734C5E50, // gauntlet4
	0x817AFAAD, // gauntlet5
	0x71CBEA98, // gb200
	0x97FA4F36, // gburrito
	0x11AA0E14, // gburrito2
	0x47A6BC1,	// glendale
	0xC98BBAD6, // glendale2
	0x4992196C, // gp1
	0x3CC7F596, // graintrailer
	0x9628879C, // granger
	0xF06C29C7, // granger2
	0x26ED430,	// greenwood
	0xA3FC0F4D, // gresley
	0x4DC079D7, // growler
	0x8408F33A, // gt500
	0x825A9F4C, // guardian
	0x34B7390F, // habanero
	0x4B6C568A, // hakuchou
	0xF0C2A91F, // hakuchou2
	0xFE141DA6, // halftrack
	0x1A7FCEFA, // handler
	0x5A82F9AE, // hauler
	0x171C92C4, // hauler2
	0x89BA59F5, // havok
	0xEA6A047F, // hellion
	0xE83C17,	// hermes
	0x11F76C14, // hexer
	0x239E390,	// hotknife
	0x42836BE5, // hotring
	0xC3F25753, // howard
	0xFD707EDE, // hunter
	0x1D06D681, // huntley
	0x23CA25F2, // hustler
	0x39D6E83F, // hydra
	0xA9EC907B, // ignus
	0xBC7C0A00, // imorgon
	0x83070B62, // impaler
	0x3C26BD0C, // impaler2
	0x8D45DF49, // impaler3
	0x9804F4C7, // impaler4
	0x1A861243, // imperator
	0x619C1B82, // imperator2
	0xD2F77E37, // imperator3
	0x18F25AC7, // infernus
	0xAC33179C, // infernus2
	0xB3206692, // ingot
	0xF683EACA, // innovation
	0x9114EADA, // insurgent
	0x7B7E56F0, // insurgent2
	0x8D4B7A8A, // insurgent3
	0x34DD8AA1, // intruder
	0xB9CB3B69, // issi2
	0x378236E1, // issi3
	0x256E92BA, // issi4
	0x5BA0FF1E, // issi5
	0x49E25BA1, // issi6
	0x6E8DA4F7, // issi7
	0x85E8E76B, // italigtb
	0xE33A477B, // italigtb2
	0xEC3E3404, // italigto
	0xBB78956A, // italirsx
	0x27816B7E, // iwagen
	0xDAC67112, // jackal
	0x3EAB5555, // jb700
	0x177DA45C, // jb7002
	0xB2A716A3, // jester
	0xBE0E6126, // jester2
	0xF330CB6A, // jester3
	0xA1B3A871, // jester4
	0x3F119114, // jet
	0x33581161, // jetmax
	0xF8D48E7A, // journey
	0x1B8165D3, // jubilee
	0xF38C4245, // jugular
	0x5852838,	// kalahari
	0xF8C2E0E7, // kamacho
	0x18619B7E, // kanjo
	0xFC2E479A, // kanjosj
	0x206D1B68, // khamelion
	0xAA6F980A, // khanjali
	0xCE44C4B9, // komoda
	0x4FAF0D70, // kosatka
	0xD86A0247, // krieger
	0xAE2BFE94, // kuruma
	0x187D938D, // kuruma2
	0x4BA4E8DC, // landstalker
	0xCE0B9F22, // landstalker2
	0xB39B0AE6, // lazer
	0xB6846A55, // le7b
	0x26321E67, // lectro
	0x1BF8D381, // lguard
	0xF92AEC4D, // limo2
	0xFF5968CD, // lm87
	0xC7E55211, // locust
	0x6EF89CCC, // longfin
	0x7B47A6A7, // lurcher
	0x250B0C5E, // luxor
	0xB79F589E, // luxor2
	0x1CBDC10B, // lynx
	0x9CFFFC56, // mamba
	0x97E55D11, // mammatus
	0x81634188, // manana
	0x665F785D, // manana2
	0xA5325278, // manchez
	0x40C332A3, // manchez2
	0xC1CE1183, // marquis
	0x49863E9C, // marshall
	0xF77ADE32, // massacro
	0xDA5819A3, // massacro2
	0x9D0450CA, // maverick
	0x79DD18AE, // menacer
	0x36848602, // mesa
	0xD36A4B44, // mesa2
	0x84F42E51, // mesa3
	0x33C9E158, // metrotrain
	0x3E5BD8D9, // michelli
	0x96E24857, // microlight
	0x9D80F93,	// miljet
	0xB53C6C52, // minitank
	0xED7EADA4, // minivan
	0xBCDE91F0, // minivan2
	0xD138A6BB, // mixer
	0x1C534995, // mixer2
	0xD35698EF, // mogul
	0x5D56F01B, // molotok
	0xE62B361B, // monroe
	0xCD93A7DB, // monster
	0x669EB40A, // monster3
	0x32174AFC, // monster4
	0xD556917C, // monster5
	0x1F52A43F, // moonbeam
	0x710A2B9B, // moonbeam2
	0x6A4BD8F6, // mower
	0x35ED670B, // mule
	0xC1632BEB, // mule2
	0x85A5B471, // mule3
	0x73F4110E, // mule4
	0x501AC93C, // mule5
	0xCB642637, // nebula
	0xDA288376, // nemesis
	0x9F6ED5A2, // neo
	0x91CA96EE, // neon
	0x3DA47243, // nero
	0x4131F378, // nero2
	0xA0438767, // nightblade
	0x8C2BD0DC, // nightshade
	0x19DD9ED1, // nightshark
	0xB2CF7250, // nimbus
	0x3D8FA25C, // ninef
	0xA8E38B01, // ninef2
	0x3DC92356, // nokota
	0x92F5024E, // novak
	0xD1AD4937, // omnis
	0xE1E2E6D7, // omnisegt
	0x58F77553, // openwheel1
	0x4669D038, // openwheel2
	0x34B82784, // oppressor
	0x7B54A9D3, // oppressor2
	0x506434F6, // oracle
	0xE18195B2, // oracle2
	0x767164D6, // osiris
	0x185E2FF3, // outlaw
	0x21EEE87D, // packer
	0xE644E480, // panto
	0x58B3979C, // paradise
	0xE550775B, // paragon
	0x546D8EEE, // paragon2
	0x33B98FE2, // pariah
	0xCFCFEB3B, // patriot
	0xE6E967F8, // patriot2
	0xD80F4A44, // patriot3
	0xEF813606, // patrolboat
	0x885F3671, // pbus
	0x149BD32A, // pbus2
	0xC9CEAF06, // pcj
	0x9734F3EA, // penetrator
	0xE9805550, // penumbra
	0xDA5EC7DA, // penumbra2
	0x6D19CCBC, // peyote
	0x9472CD24, // peyote2
	0x4201A843, // peyote3
	0x92EF6E04, // pfister811
	0x809AA4CB, // phantom
	0x9DAE1398, // phantom2
	0xA90ED5C,	// phantom3
	0x831A21D5, // phoenix
	0x59E0FBF3, // picador
	0x404B6381, // pigalle
	0x79FBB0C5, // police
	0x9F05F101, // police2
	0x71FA16EA, // police3
	0x8A63C7B9, // police4
	0xFDEFAEC3, // policeb
	0xA46462F7, // policeold1
	0x95F4C618, // policeold2
	0x1B38E955, // policet
	0x1517D4D9, // polmav
	0xF8DE29A8, // pony
	0x38408341, // pony2
	0xEE6F8F79, // postlude
	0x7DE35E7D, // pounder
	0x6290F15B, // pounder2
	0xA988D3A2, // prairie
	0x2C33B46E, // pranger
	0xE2E7D4AB, // predator
	0x8FB66F9B, // premier
	0x546DA331, // previon
	0xBB6B404F, // primo
	0x86618EDA, // primo2
	0x153E1B0A, // proptrailer
	0x7E8F677F, // prototipo
	0xAD6065C0, // pyro
	0x9D96B45B, // radi
	0xA4D99B7D, // raiden
	0x174CB172, // raketrailer
	0x829A3C44, // rallytruck
	0x6210CBB0, // rancherxl
	0x7341576B, // rancherxl2
	0x8CB29A14, // rapidgt
	0x679450AF, // rapidgt2
	0x7A2EF5E4, // rapidgt3
	0xD7C56D39, // raptor
	0x6FACDF31, // ratbike
	0xD83C13CE, // ratloader
	0xDCE1D9F7, // ratloader2
	0xEEF345EC, // rcbandito
	0xDF381E5,	// reaper
	0xB802DD46, // rebel
	0x8612B64B, // rebel2
	0x4F48FC4,	// rebla
	0x76D7C404, // reever
	0xFF22D208, // regina
	0x5216AD5E, // remus
	0xBE819C63, // rentalbus
	0x6DBD6C0A, // retinue
	0x79178F0A, // retinue2
	0xE78CC3D9, // revolter
	0x322CF98F, // rhapsody
	0x91673D0E, // rhinehart
	0x2EA68690, // rhino
	0xA4A4E453, // riata
	0xB822A1AA, // riot
	0x9B16A3B4, // riot2
	0xCD935EF9, // ripley
	0x7F5C91F1, // rocoto
	0xC5DD6967, // rogue
	0x2560B2FC, // romero
	0x36A167E0, // rrocket
	0xE505CF99, // rt3000
	0x9A5B1DCC, // rubble
	0xCABD11E8, // ruffian
	0xF26CEFF9, // ruiner
	0x381E10BD, // ruiner2
	0x2E5AFD37, // ruiner3
	0x65BDEBFC, // ruiner4
	0x4543B74D, // rumpo
	0x961AFEF7, // rumpo2
	0x57F682AF, // rumpo3
	0x2AE524A8, // ruston
	0xECA6B6A3, // s80
	0x9B909C94, // sabregt
	0xD4EA603,	// sabregt2
	0xDC434E51, // sadler
	0x2BC345D1, // sadler2
	0x2EF89E46, // sanchez
	0xA960B13E, // sanchez2
	0x58E316C7, // sanctus
	0xB9210FD0, // sandking
	0x3AF8C345, // sandking2
	0xFB133A17, // savage
	0x35DED0DD, // savestra
	0x5097F589, // sc1
	0xBBA2A2F7, // scarab
	0x5BEB3CE0, // scarab2
	0xDD71BFEB, // scarab3
	0xB52B5113, // schafter2
	0xA774B5A6, // schafter3
	0x58CF185C, // schafter4
	0xCB0E7CD9, // schafter5
	0x72934BE4, // schafter6
	0xE1C03AB0, // schlagen
	0xD37B7976, // schwarzer
	0xF4E1AA15, // scorcher
	0xD9F0503D, // scramjet
	0x9A9FD3DF, // scrap
	0xE8983F9F, // seabreeze
	0xC2974024, // seashark
	0xDB4388E4, // seashark2
	0xED762D49, // seashark3
	0xD4AE63D9, // seasparrow
	0x494752F7, // seasparrow2
	0x5F017E6B, // seasparrow3
	0x48CECED3, // seminole
	0x94114926, // seminole2
	0x50732C82, // sentinel
	0x3412AE2D, // sentinel2
	0x41D149AA, // sentinel3
	0xAF1FA439, // sentinel4
	0x4FB1A214, // serrano
	0x97398A4B, // seven70
	0xB79C1BF5, // shamal
	0x30D3F6D8, // sheava
	0x9BAA707C, // sheriff
	0x72935408, // sheriff2
	0x50A6FB9C, // shinobi
	0xE7D2A16E, // shotaro
	0x3E48BF23, // skylift
	0xC1A8A914, // slamtruck
	0x2B7F9DE3, // slamvan
	0x31ADBBFC, // slamvan2
	0x42BC5E19, // slamvan3
	0x8526E2F5, // slamvan4
	0x163F8520, // slamvan5
	0x67D52852, // slamvan6
	0x2E3967B0, // sm722
	0x2C509634, // sovereign
	0x706E2B40, // specter
	0x400F5147, // specter2
	0xDC60D2B,	// speeder
	0x1A144F2A, // speeder2
	0xCFB3870C, // speedo
	0x2B6DC64A, // speedo2
	0xD17099D,	// speedo4
	0xF9E67C05, // squaddie
	0x17DF5EC2, // squalo
	0x1324E960, // stafford
	0x72A4C31E, // stalion
	0xE80F67EE, // stalion2
	0xA7EDE74D, // stanier
	0x9A9EB7DE, // starling
	0x5C23AF9B, // stinger
	0x82E499FA, // stingergt
	0x6827CF72, // stockade
	0xF337AB36, // stockade3
	0x66B4FC45, // stratum
	0x67D2B389, // streiter
	0x8B13F083, // stretch
	0x64DE07A1, // strikeforce
	0x34DBA661, // stromberg
	0x11F58A5A, // stryder
	0x81794C70, // stunt
	0x2DFF622F, // submersible
	0xC07107EE, // submersible2
	0x3ADB9758, // sugoi
	0x39DA2754, // sultan
	0x3404691C, // sultan2
	0xEEA75E63, // sultan3
	0xEE6024BC, // sultanrs
	0xEF2295C9, // suntrap
	0x42F2ED16, // superd
	0x2A54C47D, // supervolito
	0x9C5E5644, // supervolito2
	0x16E478C1, // surano
	0x29B0DA97, // surfer
	0xB1D80E06, // surfer2
	0x8F0E3594, // surge
	0xEBC24DF2, // swift
	0x4019CB4C, // swift2
	0x1DD4C0FF, // swinger
	0x6322B39A, // t20
	0x744CA80D, // taco
	0xC3DDFDCE, // tailgater
	0xB5D306A4, // tailgater2
	0xBC5DC07E, // taipan
	0x39F9C898, // tampa
	0xC0240885, // tampa2
	0xB7D9F7F1, // tampa3
	0xD46F4737, // tanker
	0x74998082, // tanker2
	0x22EDDC30, // tankercar
	0xC703DB5F, // taxi
	0x83051506, // technical
	0x4662BCBB, // technical2
	0x50D4D19F, // technical3
	0x1044926F, // tempesta
	0xCAB6E261, // tenf
	0x10635A0E, // tenf2
	0x897AFC65, // terbyte
	0x3D7C6410, // tezeract
	0x3E3D1F59, // thrax
	0x6D6F8F43, // thrust
	0x58CDAF30, // thruster
	0xAF0B8D48, // tigon
	0x2E19879,	// tiptruck
	0xC7824E5E, // tiptruck2
	0x761E2AD3, // titan
	0x56C8A5EF, // toreador
	0x59A9E570, // torero
	0xF62446BA, // torero2
	0x1BB290BC, // tornado
	0x5B42A5C4, // tornado2
	0x690A4153, // tornado3
	0x86CF7CDD, // tornado4
	0x94DA98EF, // tornado5
	0xA31CB573, // tornado6
	0x3FD5AA2F, // toro
	0x362CAC6D, // toro2
	0xBA5334AC, // toros
	0x73B1C3CB, // tourbus
	0xB12314E0, // towtruck
	0xE5A2D6C6, // towtruck2
	0x7BE032C6, // tr2
	0x6A59902D, // tr3
	0x7CAB34D0, // tr4
	0x61D6BA8C, // tractor
	0x843B73DE, // tractor2
	0x562A97BD, // tractor3
	0x5993F939, // trailerlarge
	0x782A236D, // trailerlogs
	0xCBB2BE0E, // trailers
	0xA1DA3C91, // trailers2
	0x8548036D, // trailers3
	0xBE66F5AA, // trailers4
	0x2A72BEAB, // trailersmall
	0x8FD54EBB, // trailersmall2
	0x72435A19, // trash
	0xB527915C, // trash2
	0xAF62F6B2, // trflat
	0x4339CD69, // tribike
	0xB67597EC, // tribike2
	0xE823FB48, // tribike3
	0x612F4B6,	// trophytruck
	0xD876DBE2, // trophytruck2
	0x1149422F, // tropic
	0x56590FE9, // tropic2
	0x707E63A4, // tropos
	0x82CAC433, // tug
	0x3E2E4F8A, // tula
	0x56D42971, // tulip
	0xC575DF11, // turismo2
	0x185484E1, // turismor
	0x967620BE, // tvtrailer
	0xE99011C2, // tyrant
	0x7B406EFB, // tyrus
	0x1ED0A534, // utillitruck
	0x34E6BF6B, // utillitruck2
	0x7F2153DF, // utillitruck3
	0x142E0DC3, // vacca
	0xF79A00F7, // vader
	0x7397224C, // vagner
	0x2C1FEA99, // vagrant
	0xA09E15FD, // valkyrie
	0x5BFA5C4B, // valkyrie2
	0xFD128DFD, // vamos
	0xA42FC3A5, // vectre
	0x9C429B6A, // velum
	0x403820E8, // velum2
	0x41B77FA4, // verlierer2
	0x11CBC051, // verus
	0x4FF77E37, // vestra
	0x780FFBD2, // vetir
	0xCCE5C8FA, // veto
	0xA703E4A9, // veto2
	0xCEC6B9B7, // vigero
	0x973141FC, // vigero2
	0xB5EF4C33, // vigilante
	0xAF599F01, // vindicator
	0xE2504942, // virgo
	0xCA62927A, // virgo2
	0xFDFFB0,	// virgo3
	0xE8A8BA94, // viseris
	0xC4810400, // visione
	0x1AAD0DED, // volatol
	0x920016F1, // volatus
	0x9F4B77BE, // voltic
	0x3AF76F4A, // voltic2
	0x779B4F2D, // voodoo
	0x1F3766E3, // voodoo2
	0xDBA9DBFC, // vortex
	0x56CDEE7D, // vstr
	0x51D83328, // warrener
	0x2290C50A, // warrener2
	0x69F06B57, // washington
	0x8E08EC82, // wastelander
	0x61FE4D6A, // weevil
	0xC4BB1908, // weevil2
	0x5E4327C8, // windsor
	0x8CF5CAE1, // windsor2
	0xF376F1E6, // winky
	0xDB20A373, // wolfsbane
	0x36B4A8A9, // xa21
	0x47BBCF2E, // xls
	0xE6401328, // xls2
	0x6F946279, // yosemite
	0x64F49967, // yosemite2
	0x409D787,	// yosemite3
	0x3E5F6B8,	// youga
	0x3D29CD2B, // youga2
	0x6B73A9BE, // youga3
	0x589A840C, // youga4
	0x3201DD49, // z190
	0x2714AA93, // zeno
	0xAC5DF515, // zentorno
	0x4C8DBA51, // zhaba
	0xBD1B39C3, // zion
	0xB8E2AE18, // zion2
	0x6F039A67, // zion3
	0xC3D7C72B, // zombiea
	0xDE05FB87, // zombieb
	0xD757D97D, // zorrusso
	0x91373058, // zr350
	0x20314B42, // zr380
	0xBE11EFC6, // zr3802
	0xA7DCC35C, // zr3803
	0x2D3BD401, // ztype
	0x3B639C8D, // boor
	0xA2073353, // brickade2
	0x8CC51028, // broadway
	0x8B4864E1, // cargoplane2
	0x6838FC1D, // entity3
	0xB581BF9A, // eudora
	0xF82BC92E, // everon2
	0x5C6C00B4, // issi8
	0x9F04C481, // journey2
	0x5285D628, // manchez3
	0x7D326F04, // panthere
	0xAD5E30D7, // powersurge
	0x402586F8, // r300
	0xC247AEE5, // surfer3
	0xE478B977, // tahoma
	0x1004EDA4, // tulip2
	0x27E34161  // virtue
	};
}