#ifndef _IMG0_H_ 
#define _IMG0_H_ 
#include "KERNEL.h" 
static d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH] ={{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1.4838571003242282,1.3342680991364173,1.3193091990176362,1.1996379980673875,1.0799667971171387,1.0201311966420143,0.9303777959293279,0.8256654950978602,0.8107065949790793,0.9004599956917657,0.8406243952166413,0.7508709945039549,0.6611175937912683,0.6760764939100494,0.601281993316144,0.6611175937912683,0.5713641930785818,0.4666518922471142,0.616240893434925,-0.012032911553880685,-0.4907177153548755,-0.4458410149985323,-0.6403067165426864,-0.07186851202900504,0},{0,0.9303777959293279,0.9752544962856712,1.0201311966420143,0.9004599956917657,0.7957476948602982,0.7508709945039549,0.7359120943851738,0.7059942941476116,0.7209531942663927,0.7508709945039549,0.7059942941476116,0.7059942941476116,0.6611175937912683,0.7359120943851738,0.6461586936724872,0.7059942941476116,0.7359120943851738,0.6910353940288305,0.1674738898714924,-0.32616981404828355,-0.23641641333559701,-0.4308821148797512,-0.35608761428584573,0.3768984915344276,0},{0,0.6760764939100494,0.6461586936724872,0.7359120943851738,0.6311997935537061,0.6611175937912683,0.6910353940288305,0.7209531942663927,0.7508709945039549,0.7807887947415171,0.8256654950978602,0.765829894622736,0.8107065949790793,0.8107065949790793,0.8107065949790793,0.7059942941476116,0.7807887947415171,0.765829894622736,0.24226839046539783,-0.6552656166614675,-0.8646902183244027,-0.28129311369194027,-0.23641641333559701,0.2572272905841789,0.5414463928410196,0},{0,0.6760764939100494,0.601281993316144,0.7059942941476116,0.616240893434925,0.6760764939100494,0.7359120943851738,0.7957476948602982,0.8406243952166413,0.8855010955729846,1.0051722965232335,0.945336696048109,0.9303777959293279,0.8256654950978602,0.8705421954542035,0.8406243952166413,0.8555832953354224,0.5564052929598007,-0.3710465144046268,-1.1638682207000246,-1.1040326202249002,-0.16162191274169158,0.3918573916532087,0.5564052929598007,0.4666518922471142,0},{0,0.7209531942663927,0.6611175937912683,0.7807887947415171,0.6910353940288305,0.7209531942663927,0.8107065949790793,0.8705421954542035,0.9154188958105468,0.8555832953354224,0.945336696048109,1.0799667971171387,1.1846790979486064,1.0051722965232335,1.0650078969983576,0.9902133964044523,0.8555832953354224,0.3619395914156465,-0.7001423170178108,-1.1489093205812435,-0.909566918680746,0.21235059022783564,0.7209531942663927,0.6760764939100494,0.5264874927222385,0},{0,0.7508709945039549,0.6760764939100494,0.8107065949790793,0.7508709945039549,0.7508709945039549,0.8406243952166413,0.945336696048109,1.109884597354701,0.9902133964044523,0.945336696048109,1.0650078969983576,1.139802397592263,0.9602955961668901,0.8406243952166413,0.8107065949790793,0.7059942941476116,0.12259718951514911,-0.5206355155924377,-0.6702245167802486,-0.5355944157112188,0.27218619070296,0.49656969248467636,0.4666518922471142,0.5264874927222385,0},{0,0.765829894622736,0.6760764939100494,0.7957476948602982,0.7359120943851738,0.7209531942663927,0.7957476948602982,0.8855010955729846,0.9303777959293279,0.601281993316144,0.7209531942663927,0.7957476948602982,0.9154188958105468,1.124843497473482,1.4240214998491039,1.797994002818631,1.8428707031749743,0.5564052929598007,0.017884888683681495,-0.32616981404828355,-0.730060117255373,-0.08682741214778612,0.06276158904002475,0.12259718951514911,0.3619395914156465,0},{0,0.7508709945039549,0.6760764939100494,0.765829894622736,0.7059942941476116,0.6910353940288305,0.7807887947415171,0.6760764939100494,0.616240893434925,0.765829894622736,1.3641858993739795,1.6484050016308203,1.6783228018683825,1.78303510269985,1.7231995022247257,1.7381584023435068,1.5137749005617904,1.0650078969983576,1.4688982002054471,0.8256654950978602,-0.730060117255373,-0.9544436190370893,-0.7599779174929351,0.1824327899902735,0.34698069129686543,0},{0,0.7807887947415171,0.7359120943851738,0.7059942941476116,0.6910353940288305,0.6611175937912683,0.6311997935537061,0.7957476948602982,1.0949256972359198,1.1996379980673875,1.0350900967607954,0.6910353940288305,0.3619395914156465,0.22730949034661674,0.03284378880246258,-0.23641641333559701,-0.4757588152360944,0.3021039909405222,1.9326241038876608,1.6484050016308203,0.06276158904002475,-1.1638682207000246,-1.2536216214127112,-0.4308821148797512,0.3768984915344276,0},{0,0.8256654950978602,0.8256654950978602,0.5863230931973629,0.6611175937912683,0.5863230931973629,0.8107065949790793,0.7359120943851738,0.2871450908217411,0.047802688921243675,0.017884888683681495,-0.6253478164239054,-1.074114819987338,-0.9245258187995271,-0.6103889163051243,-0.9843614192746515,-1.0890737201061191,0.436734092009552,1.768076202581069,1.78303510269985,0.9902133964044523,-0.7898957177304973,-1.2685805215314923,-1.074114819987338,-0.34112871416706464,0},{0,0.7957476948602982,0.765829894622736,0.4516929921283331,0.5564052929598007,0.6311997935537061,0.5414463928410196,-0.10178631226656722,-0.34112871416706464,-0.07186851202900504,-0.1317041125041294,-0.6702245167802486,-1.0292381196309948,-1.074114819987338,-0.6103889163051243,-0.909566918680746,-0.3860054145234079,1.2594735985425118,1.6484050016308203,1.7082406021059446,1.6783228018683825,0.1674738898714924,-1.1189915203436813,-1.0890737201061191,-1.0292381196309948,0},{0,0.7059942941476116,0.616240893434925,0.7209531942663927,0.601281993316144,0.3918573916532087,-0.3710465144046268,-0.28129311369194027,-0.07186851202900504,0.22730949034661674,-0.19153971297925376,-0.7599779174929351,-0.8497313182056216,-0.8198135179680595,-0.31121091392950245,0.3619395914156465,1.3641858993739795,1.6783228018683825,1.588569401155696,1.7082406021059446,1.5586516009181337,0.2572272905841789,-0.4458410149985323,-0.8048546178492784,-1.0890737201061191,0},{0,0.6311997935537061,0.34698069129686543,0.616240893434925,0.4516929921283331,-0.14666301262291048,-0.026991811672661774,-0.46079991511731333,-0.32616981404828355,-0.08682741214778612,-0.34112871416706464,-0.11674521238534831,0.9602955961668901,1.5137749005617904,1.9176652037688797,2.186925405906939,2.1570076056693774,1.8578296032937553,1.8578296032937553,1.797994002818631,0.34698069129686543,-0.6403067165426864,0.03284378880246258,-0.565512215948781,-1.059155919868557,0},{0,0.3768984915344276,-0.32616981404828355,-0.4907177153548755,-0.35608761428584573,-0.14666301262291048,-0.23641641333559701,-0.9245258187995271,-0.9394847189183082,-0.8198135179680595,-0.9843614192746515,0.7359120943851738,2.261719906500845,2.1719665057881583,2.1570076056693774,2.0373364047191287,1.9326241038876608,1.9176652037688797,1.977500804244004,0.8705421954542035,-0.4907177153548755,-0.5056766154736566,-0.10178631226656722,-0.19153971297925376,-0.19153971297925376,0},{0,0.7508709945039549,-0.29625201381072136,-0.6851834168990297,-0.5804711160675621,-0.35608761428584573,-0.8646902183244027,-1.0142792195122137,-1.0292381196309948,-0.6552656166614675,-0.745019017374154,0.9602955961668901,1.8877474035313175,1.618487201393258,1.4838571003242282,1.4988160004430093,1.753117302462288,1.9326241038876608,1.977500804244004,1.2295557983049497,0.1824327899902735,0.03284378880246258,0.3619395914156465,0.6611175937912683,0.8705421954542035,0},{0,1.4688982002054471,-0.22145751321681592,-0.8646902183244027,-0.7151012171365919,-0.5056766154736566,-1.0441970197497759,-1.1189915203436813,-1.0142792195122137,-0.5056766154736566,-0.3710465144046268,1.0051722965232335,1.5436927007993526,1.3641858993739795,1.3193091990176362,1.5736105010369148,1.6484050016308203,1.5436927007993526,1.7231995022247257,1.962541904125223,1.3193091990176362,0.9004599956917657,0.9752544962856712,0.8705421954542035,0.9004599956917657,0},{0,1.3492269992551984,-0.012032911553880685,-0.7898957177304973,-0.730060117255373,-0.5804711160675621,-1.1937860209375868,-1.1937860209375868,-1.1937860209375868,-1.059155919868557,-0.6253478164239054,1.0350900967607954,1.4240214998491039,1.274432498661293,1.4090625997303228,1.4090625997303228,0.3619395914156465,-0.32616981404828355,-0.012032911553880685,1.0500489968795765,1.5736105010369148,1.3791447994927606,1.1846790979486064,1.0350900967607954,0.9303777959293279,0},{0,0.7209531942663927,0.22730949034661674,-0.6851834168990297,-0.6702245167802486,-0.9394847189183082,-1.3134572218878355,-1.223703821175149,-1.1339504204624624,-0.909566918680746,-0.5505533158299999,1.0650078969983576,1.3342680991364173,1.2145968981861686,1.4838571003242282,0.33202179117808434,-1.0441970197497759,-1.059155919868557,-1.0441970197497759,-0.6403067165426864,0.8705421954542035,1.438980399967885,1.1996379980673875,0.765829894622736,0.6311997935537061,0},{0,-0.28129311369194027,0.2572272905841789,-0.5804711160675621,-0.6403067165426864,-1.0890737201061191,-1.2536216214127112,-1.1937860209375868,-0.4757588152360944,-0.012032911553880685,0.12259718951514911,1.109884597354701,1.274432498661293,1.289391398780074,1.1697201978298253,-0.730060117255373,-0.9245258187995271,-0.6552656166614675,-0.7898957177304973,-1.1489093205812435,-0.31121091392950245,0.8705421954542035,0.6760764939100494,0.3918573916532087,0.3918573916532087,0},{0,-0.4757588152360944,0.34698069129686543,-0.34112871416706464,-0.8946080185619649,-1.1638682207000246,-1.1489093205812435,-0.9993203193934326,-0.28129311369194027,-0.17658081286047267,0.2572272905841789,1.438980399967885,1.438980399967885,1.4988160004430093,0.7209531942663927,-0.9544436190370893,-0.7151012171365919,-0.909566918680746,-0.9544436190370893,-0.9394847189183082,-0.9544436190370893,0.2572272905841789,0.616240893434925,0.48161079236589527,-0.026991811672661774,0},{0,-0.46079991511731333,0.33202179117808434,-0.20649861309803483,-0.9394847189183082,-1.1189915203436813,-0.8946080185619649,-0.6403067165426864,-0.29625201381072136,-0.31121091392950245,0.6760764939100494,1.4688982002054471,1.3193091990176362,1.3342680991364173,0.3768984915344276,-0.8946080185619649,-0.5505533158299999,-0.565512215948781,-0.745019017374154,-0.9544436190370893,-1.1489093205812435,-0.28129311369194027,0.6311997935537061,0.49656969248467636,-0.46079991511731333,0},{0,-0.4907177153548755,0.21235059022783564,-0.23641641333559701,-1.0441970197497759,-1.059155919868557,-0.6702245167802486,-0.22145751321681592,0.07772048915880585,0.09267938927758694,0.8107065949790793,1.0949256972359198,1.0799667971171387,1.1846790979486064,0.33202179117808434,-0.8796491184431838,-0.5056766154736566,-0.29625201381072136,-0.6253478164239054,-0.8048546178492784,-1.1040326202249002,-0.745019017374154,0.2572272905841789,0.07772048915880585,-0.8646902183244027,0},{0,-0.5056766154736566,0.06276158904002475,-0.05690961191022395,-0.6552656166614675,-0.4458410149985323,0.10763828939636803,0.6910353940288305,1.109884597354701,1.1697201978298253,1.274432498661293,1.3791447994927606,1.3641858993739795,1.3641858993739795,0.49656969248467636,-0.8497313182056216,-0.5505533158299999,0.07772048915880585,0.017884888683681495,-0.5954300161863432,-0.9544436190370893,-1.1040326202249002,-0.31121091392950245,-0.4757588152360944,-1.1788271208188057,0},{0,-0.3860054145234079,-0.026991811672661774,-0.32616981404828355,-0.6552656166614675,-0.5804711160675621,-0.46079991511731333,-0.25137531345437814,-0.07186851202900504,0.0029259885649004047,0.07772048915880585,0.10763828939636803,0.07772048915880585,0.10763828939636803,-0.11674521238534831,-0.8796491184431838,-0.46079991511731333,-0.4757588152360944,-0.4308821148797512,-0.9245258187995271,-1.059155919868557,-1.2984983217690544,-1.1040326202249002,-1.2087449210563679,-1.3134572218878355,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,-0.5804711160675621,-0.8198135179680595,-0.8796491184431838,-0.9544436190370893,-0.9394847189183082,-0.9245258187995271,-0.9394847189183082,-0.9694025191558704,-0.9694025191558704,-0.9694025191558704,-0.9394847189183082,-0.909566918680746,-0.9394847189183082,-0.9394847189183082,-0.9394847189183082,-0.9394847189183082,-0.9394847189183082,-0.6403067165426864,-0.35608761428584573,-0.730060117255373,-0.9843614192746515,-1.0890737201061191,-1.1638682207000246,-0.9843614192746515,0},{0,-0.9694025191558704,-0.9694025191558704,-0.9843614192746515,-1.0292381196309948,-1.0142792195122137,-0.9843614192746515,-0.9694025191558704,-0.9843614192746515,-0.9993203193934326,-0.9993203193934326,-0.9544436190370893,-0.8946080185619649,-0.9245258187995271,-0.909566918680746,-0.8646902183244027,-0.909566918680746,-0.8646902183244027,0.03284378880246258,0.047802688921243675,-0.46079991511731333,-0.745019017374154,-0.9544436190370893,-0.909566918680746,-0.7001423170178108,0},{0,-1.0292381196309948,-1.0142792195122137,-1.0292381196309948,-1.0441970197497759,-1.0292381196309948,-1.0292381196309948,-0.9843614192746515,-0.9694025191558704,-0.9993203193934326,-0.9843614192746515,-0.9245258187995271,-0.8347724180868406,-0.8796491184431838,-0.8946080185619649,-0.8347724180868406,-0.909566918680746,-0.5954300161863432,-0.026991811672661774,-0.5355944157112188,-0.8048546178492784,-0.5206355155924377,-0.7599779174929351,-0.7151012171365919,-0.6851834168990297,0},{0,-1.0292381196309948,-1.0142792195122137,-1.0292381196309948,-1.0292381196309948,-0.9993203193934326,-1.0142792195122137,-0.9694025191558704,-0.9544436190370893,-0.9843614192746515,-0.9544436190370893,-0.9245258187995271,-0.7749368176117162,-0.7599779174929351,-0.6851834168990297,-0.5954300161863432,-0.6403067165426864,-0.3860054145234079,-0.400964314642189,-1.0890737201061191,-1.1937860209375868,-0.8497313182056216,-0.8048546178492784,-0.8946080185619649,-0.8796491184431838,0},{0,-1.0441970197497759,-1.0292381196309948,-1.0142792195122137,-1.0142792195122137,-0.9843614192746515,-0.9993203193934326,-0.9394847189183082,-0.909566918680746,-0.8048546178492784,-0.5206355155924377,-0.5954300161863432,-0.4757588152360944,-0.4757588152360944,-0.4907177153548755,-0.5355944157112188,-0.5505533158299999,-0.4458410149985323,-0.7599779174929351,-1.1040326202249002,-1.1189915203436813,-0.9694025191558704,-0.9843614192746515,-0.9993203193934326,-0.9544436190370893,0},{0,-1.0441970197497759,-1.059155919868557,-1.0292381196309948,-0.9993203193934326,-0.9993203193934326,-0.9843614192746515,-0.8796491184431838,-0.6253478164239054,-0.4308821148797512,-0.22145751321681592,-0.5056766154736566,-0.5804711160675621,-0.6253478164239054,-0.6702245167802486,-0.6103889163051243,-0.4907177153548755,-0.5206355155924377,-0.6253478164239054,-0.6403067165426864,-0.7001423170178108,-0.745019017374154,-0.8347724180868406,-0.9843614192746515,-0.9843614192746515,0},{0,-1.0441970197497759,-1.0441970197497759,-1.0441970197497759,-1.0142792195122137,-0.9843614192746515,-0.9843614192746515,-0.8198135179680595,-0.565512215948781,-0.6253478164239054,-0.3710465144046268,-0.4308821148797512,-0.25137531345437814,0.19739169010905455,0.6910353940288305,1.124843497473482,1.3941036996115417,0.49656969248467636,0.19739169010905455,-0.23641641333559701,-0.8646902183244027,-0.5206355155924377,-0.4458410149985323,-0.7898957177304973,-0.9843614192746515,0},{0,-0.9993203193934326,-0.9993203193934326,-1.0292381196309948,-0.9993203193934326,-0.9843614192746515,-0.9245258187995271,-0.8946080185619649,-0.6403067165426864,-0.08682741214778612,0.9004599956917657,1.3043502988988551,1.4838571003242282,1.7082406021059446,1.7082406021059446,1.6633639017496014,1.588569401155696,1.3043502988988551,1.753117302462288,0.9154188958105468,-1.0292381196309948,-0.9993203193934326,-0.8048546178492784,-0.31121091392950245,-0.7599779174929351,0},{0,-0.9993203193934326,-0.9993203193934326,-0.9843614192746515,-0.9694025191558704,-0.9843614192746515,-0.8796491184431838,-0.3710465144046268,0.3170628910593033,0.7957476948602982,0.9602955961668901,0.7359120943851738,0.3918573916532087,0.1375560896339302,-0.041950711791442864,-0.29625201381072136,-0.4458410149985323,0.3918573916532087,2.112130905313034,1.8279118030561932,-0.19153971297925376,-1.1339504204624624,-1.2087449210563679,-0.6103889163051243,-0.31121091392950245,0},{0,-1.0142792195122137,-1.0142792195122137,-0.9843614192746515,-0.9694025191558704,-0.9694025191558704,-0.28129311369194027,0.1824327899902735,0.0029259885649004047,-0.16162191274169158,-0.07186851202900504,-0.5804711160675621,-1.0890737201061191,-1.1040326202249002,-0.8497313182056216,-1.1339504204624624,-1.1189915203436813,0.49656969248467636,1.947583004006442,1.9924597043627852,0.9602955961668901,-0.8198135179680595,-1.2536216214127112,-1.0292381196309948,-0.4757588152360944,0},{0,-0.9993203193934326,-0.9843614192746515,-1.074114819987338,-1.0441970197497759,-0.5355944157112188,-0.08682741214778612,-0.4907177153548755,-0.745019017374154,-0.4458410149985323,-0.19153971297925376,-0.6103889163051243,-0.9993203193934326,-1.1937860209375868,-0.7151012171365919,-0.909566918680746,-0.2663342135731592,1.4988160004430093,1.8727885034125364,1.768076202581069,1.7082406021059446,0.1824327899902735,-1.1489093205812435,-1.1189915203436813,-1.0142792195122137,0},{0,-0.9843614192746515,-0.8048546178492784,-0.46079991511731333,-0.5804711160675621,-0.22145751321681592,-0.5804711160675621,-0.5206355155924377,-0.4757588152360944,-0.16162191274169158,-0.20649861309803483,-0.6702245167802486,-0.7898957177304973,-0.8347724180868406,-0.2663342135731592,0.49656969248467636,1.5736105010369148,1.977500804244004,1.8727885034125364,1.8877474035313175,1.78303510269985,0.4068162917719898,-0.5056766154736566,-1.0441970197497759,-1.1489093205812435,0},{0,-0.8646902183244027,-0.565512215948781,0.07772048915880585,0.017884888683681495,-0.2663342135731592,0.03284378880246258,-0.4308821148797512,-0.3710465144046268,-0.14666301262291048,-0.29625201381072136,-0.012032911553880685,1.0650078969983576,1.5736105010369148,1.977500804244004,2.306596606857188,2.306596606857188,2.0373364047191287,2.0522953048379096,1.962541904125223,0.4516929921283331,-0.8048546178492784,-0.4757588152360944,-1.1040326202249002,-1.223703821175149,0},{0,-0.7599779174929351,-0.7001423170178108,-0.565512215948781,-0.32616981404828355,-0.041950711791442864,-0.1317041125041294,-0.8048546178492784,-0.745019017374154,-0.6253478164239054,-0.8796491184431838,0.8555832953354224,2.3963500075698745,2.3215555069759692,2.261719906500845,2.1270898054318153,2.0223775046003474,2.0074186044815665,2.0223775046003474,0.7209531942663927,-0.8946080185619649,-1.1937860209375868,-0.9843614192746515,-0.7599779174929351,-0.35608761428584573,0},{0,0.03284378880246258,-0.31121091392950245,-0.6702245167802486,-0.5505533158299999,-0.23641641333559701,-0.7898957177304973,-0.9993203193934326,-0.9544436190370893,-0.5206355155924377,-0.6253478164239054,1.0799667971171387,2.0373364047191287,1.8428707031749743,1.7082406021059446,1.6783228018683825,1.9027063036500986,2.067254204956691,2.0522953048379096,1.0799667971171387,-0.25137531345437814,-0.5056766154736566,-0.012032911553880685,0.5564052929598007,0.8705421954542035,0},{0,1.2594735985425118,-0.012032911553880685,-0.8198135179680595,-0.730060117255373,-0.4159232147609701,-1.0142792195122137,-1.1937860209375868,-1.0441970197497759,-0.400964314642189,-0.17658081286047267,1.1846790979486064,1.753117302462288,1.618487201393258,1.588569401155696,1.797994002818631,1.8428707031749743,1.7231995022247257,1.8877474035313175,2.0373364047191287,1.289391398780074,0.9154188958105468,1.1547612977110442,1.139802397592263,1.0650078969983576,0},{0,1.4838571003242282,0.3021039909405222,-0.6552656166614675,-0.6702245167802486,-0.5056766154736566,-1.2087449210563679,-1.223703821175149,-1.1489093205812435,-0.8946080185619649,-0.3710465144046268,1.289391398780074,1.6932817019871635,1.5436927007993526,1.6633639017496014,1.603528301274477,0.49656969248467636,-0.17658081286047267,0.1674738898714924,1.2145968981861686,1.797994002818631,1.6334461015120392,1.3941036996115417,1.289391398780074,1.1697201978298253,0},{0,0.8855010955729846,0.5564052929598007,-0.5355944157112188,-0.5804711160675621,-0.909566918680746,-1.3134572218878355,-1.2087449210563679,-1.0292381196309948,-0.6851834168990297,-0.28129311369194027,1.3342680991364173,1.603528301274477,1.4838571003242282,1.7082406021059446,0.48161079236589527,-0.9843614192746515,-0.9694025191558704,-0.909566918680746,-0.5206355155924377,1.0799667971171387,1.6633639017496014,1.3941036996115417,1.0051722965232335,0.8406243952166413,0},{0,-0.11674521238534831,0.5863230931973629,-0.4308821148797512,-0.565512215948781,-1.074114819987338,-1.2536216214127112,-1.1189915203436813,-0.28129311369194027,0.2572272905841789,0.3918573916532087,1.3791447994927606,1.5436927007993526,1.5586516009181337,1.3791447994927606,-0.6552656166614675,-0.909566918680746,-0.6253478164239054,-0.7151012171365919,-1.059155919868557,-0.17658081286047267,1.0500489968795765,0.8555832953354224,0.616240893434925,0.5713641930785818,0},{0,-0.31121091392950245,0.6760764939100494,-0.19153971297925376,-0.8198135179680595,-1.1339504204624624,-1.1040326202249002,-0.8497313182056216,-0.041950711791442864,0.09267938927758694,0.5264874927222385,1.7082406021059446,1.7082406021059446,1.753117302462288,0.9154188958105468,-0.8796491184431838,-0.7151012171365919,-0.8796491184431838,-0.8946080185619649,-0.8796491184431838,-0.8946080185619649,0.3918573916532087,0.8107065949790793,0.7059942941476116,0.12259718951514911,0},{0,-0.29625201381072136,0.6760764939100494,-0.05690961191022395,-0.8646902183244027,-1.0441970197497759,-0.7749368176117162,-0.4159232147609701,-0.05690961191022395,-0.07186851202900504,0.945336696048109,1.7381584023435068,1.588569401155696,1.603528301274477,0.5713641930785818,-0.8048546178492784,-0.5206355155924377,-0.5355944157112188,-0.7001423170178108,-0.9394847189183082,-1.1339504204624624,-0.20649861309803483,0.8406243952166413,0.7209531942663927,-0.35608761428584573,0},{0,-0.32616981404828355,0.5564052929598007,-0.07186851202900504,-0.9394847189183082,-0.909566918680746,-0.46079991511731333,0.047802688921243675,0.3021039909405222,0.3021039909405222,1.0650078969983576,1.3641858993739795,1.3342680991364173,1.453939300086666,0.5414463928410196,-0.745019017374154,-0.46079991511731333,-0.23641641333559701,-0.565512215948781,-0.8347724180868406,-1.1339504204624624,-0.7001423170178108,0.4666518922471142,0.3021039909405222,-0.7898957177304973,0},{0,-0.31121091392950245,0.3918573916532087,0.19739169010905455,-0.4458410149985323,-0.14666301262291048,0.4516929921283331,1.0201311966420143,1.3791447994927606,1.4090625997303228,1.5586516009181337,1.6484050016308203,1.618487201393258,1.603528301274477,0.6760764939100494,-0.730060117255373,-0.46079991511731333,0.1674738898714924,0.10763828939636803,-0.5804711160675621,-0.9394847189183082,-1.0441970197497759,-0.17658081286047267,-0.32616981404828355,-1.1189915203436813,0},{0,-0.2663342135731592,0.1824327899902735,-0.08682741214778612,-0.46079991511731333,-0.32616981404828355,-0.16162191274169158,0.0029259885649004047,0.1375560896339302,0.19739169010905455,0.33202179117808434,0.33202179117808434,0.27218619070296,0.27218619070296,-0.026991811672661774,-0.8048546178492784,-0.3860054145234079,-0.400964314642189,-0.3710465144046268,-0.8946080185619649,-1.0142792195122137,-1.23866272129393,-1.059155919868557,-1.1489093205812435,-1.2835394216502733,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,-1.0142792195122137,-1.2685805215314923,-1.2536216214127112,-1.23866272129393,-1.2536216214127112,-1.23866272129393,-1.223703821175149,-1.23866272129393,-1.223703821175149,-1.2087449210563679,-1.2536216214127112,-1.23866272129393,-1.223703821175149,-1.2536216214127112,-1.23866272129393,-1.2536216214127112,-1.23866272129393,-0.8048546178492784,-0.400964314642189,-0.7749368176117162,-1.1189915203436813,-1.1189915203436813,-1.1489093205812435,-1.0441970197497759,0},{0,-1.223703821175149,-1.2685805215314923,-1.223703821175149,-1.23866272129393,-1.2835394216502733,-1.2835394216502733,-1.223703821175149,-1.2087449210563679,-1.1937860209375868,-1.2087449210563679,-1.2536216214127112,-1.223703821175149,-1.2087449210563679,-1.1937860209375868,-1.1937860209375868,-1.2536216214127112,-1.059155919868557,-0.08682741214778612,0.03284378880246258,-0.4757588152360944,-0.8497313182056216,-1.1489093205812435,-1.074114819987338,-0.8796491184431838,0},{0,-1.23866272129393,-1.23866272129393,-1.2087449210563679,-1.2536216214127112,-1.2685805215314923,-1.2835394216502733,-1.2087449210563679,-1.1489093205812435,-1.1638682207000246,-1.1788271208188057,-1.2087449210563679,-1.1788271208188057,-1.223703821175149,-1.1489093205812435,-1.1489093205812435,-1.2536216214127112,-0.8048546178492784,-0.07186851202900504,-0.46079991511731333,-0.7599779174929351,-0.565512215948781,-0.9394847189183082,-0.9394847189183082,-0.9394847189183082,0},{0,-1.1937860209375868,-1.2087449210563679,-1.1788271208188057,-1.223703821175149,-1.223703821175149,-1.23866272129393,-1.1788271208188057,-1.1489093205812435,-1.1489093205812435,-1.0890737201061191,-1.1189915203436813,-1.074114819987338,-1.1189915203436813,-1.0441970197497759,-0.9694025191558704,-1.0292381196309948,-0.6253478164239054,-0.4308821148797512,-1.059155919868557,-1.2087449210563679,-0.909566918680746,-0.9694025191558704,-1.1189915203436813,-1.1638682207000246,0},{0,-1.1937860209375868,-1.2087449210563679,-1.1489093205812435,-1.1937860209375868,-1.1638682207000246,-1.1788271208188057,-1.1489093205812435,-1.1339504204624624,-1.074114819987338,-0.8198135179680595,-0.8497313182056216,-0.7599779174929351,-0.8198135179680595,-0.8796491184431838,-0.8497313182056216,-0.8497313182056216,-0.5954300161863432,-0.7151012171365919,-1.1339504204624624,-1.223703821175149,-1.059155919868557,-1.1788271208188057,-1.223703821175149,-1.2087449210563679,0},{0,-1.1788271208188057,-1.2087449210563679,-1.1489093205812435,-1.1638682207000246,-1.1489093205812435,-1.1489093205812435,-1.059155919868557,-0.8497313182056216,-0.7749368176117162,-0.6253478164239054,-0.7599779174929351,-0.7898957177304973,-0.8796491184431838,-0.9544436190370893,-0.7749368176117162,-0.6103889163051243,-0.5505533158299999,-0.4757588152360944,-0.5804711160675621,-0.7898957177304973,-0.8347724180868406,-1.0441970197497759,-1.1937860209375868,-1.1788271208188057,0},{0,-1.1788271208188057,-1.2087449210563679,-1.1638682207000246,-1.1638682207000246,-1.1638682207000246,-1.1189915203436813,-0.9544436190370893,-0.7599779174929351,-0.8796491184431838,-0.6103889163051243,-0.6103889163051243,-0.4159232147609701,-0.041950711791442864,0.4217751918907709,1.0500489968795765,1.3342680991364173,0.4516929921283331,0.33202179117808434,-0.10178631226656722,-0.8497313182056216,-0.6103889163051243,-0.6253478164239054,-0.9245258187995271,-1.1040326202249002,0},{0,-1.1489093205812435,-1.1788271208188057,-1.1638682207000246,-1.1788271208188057,-1.1788271208188057,-1.0890737201061191,-0.9993203193934326,-0.7749368176117162,-0.20649861309803483,0.8406243952166413,1.2594735985425118,1.4240214998491039,1.6334461015120392,1.6334461015120392,1.78303510269985,1.6633639017496014,1.289391398780074,1.8279118030561932,1.0051722965232335,-0.9394847189183082,-1.074114819987338,-0.8497313182056216,-0.31121091392950245,-0.8048546178492784,0},{0,-1.1189915203436813,-1.1489093205812435,-1.1638682207000246,-1.1489093205812435,-1.1788271208188057,-0.9993203193934326,-0.4308821148797512,0.2572272905841789,0.765829894622736,1.0650078969983576,0.8406243952166413,0.5115285926034574,0.2871450908217411,0.047802688921243675,-0.10178631226656722,-0.25137531345437814,0.5264874927222385,2.2467610063820636,1.8578296032937553,-0.10178631226656722,-1.1788271208188057,-1.223703821175149,-0.5804711160675621,-0.2663342135731592,0},{0,-1.1040326202249002,-1.1189915203436813,-1.1788271208188057,-1.1489093205812435,-1.059155919868557,-0.34112871416706464,0.1824327899902735,0.03284378880246258,-0.07186851202900504,0.06276158904002475,-0.4458410149985323,-0.9843614192746515,-1.0292381196309948,-0.8347724180868406,-1.1040326202249002,-1.0142792195122137,0.6910353940288305,2.1570076056693774,2.1570076056693774,1.139802397592263,-0.730060117255373,-1.2536216214127112,-1.0142792195122137,-0.3710465144046268,0},{0,-1.1189915203436813,-1.0890737201061191,-1.1937860209375868,-1.0890737201061191,-0.5505533158299999,-0.11674521238534831,-0.4757588152360944,-0.6702245167802486,-0.34112871416706464,-0.11674521238534831,-0.5355944157112188,-0.9544436190370893,-1.1788271208188057,-0.7749368176117162,-0.9394847189183082,-0.22145751321681592,1.6334461015120392,2.112130905313034,2.097172005194253,1.9924597043627852,0.3619395914156465,-1.0292381196309948,-1.074114819987338,-0.9694025191558704,0},{0,-1.1489093205812435,-0.909566918680746,-0.5056766154736566,-0.5355944157112188,-0.17658081286047267,-0.565512215948781,-0.5056766154736566,-0.46079991511731333,-0.1317041125041294,-0.19153971297925376,-0.6103889163051243,-0.745019017374154,-0.8347724180868406,-0.29625201381072136,0.49656969248467636,1.6334461015120392,2.097172005194253,2.0822131050754717,2.1719665057881583,1.947583004006442,0.5264874927222385,-0.34112871416706464,-0.9694025191558704,-1.1489093205812435,0},{0,-0.9993203193934326,-0.6552656166614675,0.03284378880246258,0.017884888683681495,-0.17658081286047267,0.10763828939636803,-0.46079991511731333,-0.4458410149985323,-0.22145751321681592,-0.29625201381072136,0.047802688921243675,1.124843497473482,1.603528301274477,2.0223775046003474,2.3813911074510936,2.411308907688656,2.186925405906939,2.2318021062632827,2.097172005194253,0.49656969248467636,-0.730060117255373,-0.25137531345437814,-0.9394847189183082,-1.1788271208188057,0},{0,-0.8198135179680595,-0.730060117255373,-0.5206355155924377,-0.28129311369194027,0.07772048915880585,-0.041950711791442864,-0.8198135179680595,-0.8198135179680595,-0.6851834168990297,-0.8497313182056216,0.945336696048109,2.456185608044999,2.3813911074510936,2.3664322073323123,2.291637706738407,2.186925405906939,2.186925405906939,2.2018843060257205,0.8855010955729846,-0.7749368176117162,-1.0441970197497759,-0.6702245167802486,-0.4757588152360944,-0.20649861309803483,0},{0,0.017884888683681495,-0.2663342135731592,-0.46079991511731333,-0.3710465144046268,-0.10178631226656722,-0.7001423170178108,-0.9394847189183082,-0.8646902183244027,-0.4308821148797512,-0.5355944157112188,1.2445146984237307,2.2318021062632827,2.0074186044815665,1.8877474035313175,1.8877474035313175,2.097172005194253,2.2168432061445014,2.2018843060257205,1.289391398780074,-0.07186851202900504,-0.32616981404828355,0.22730949034661674,0.8256654950978602,1.0949256972359198,0},{0,1.3342680991364173,0.10763828939636803,-0.565512215948781,-0.5206355155924377,-0.28129311369194027,-0.9394847189183082,-1.1489093205812435,-0.9544436190370893,-0.2663342135731592,-0.026991811672661774,1.4090625997303228,1.9924597043627852,1.8279118030561932,1.8279118030561932,2.0522953048379096,2.0373364047191287,1.8578296032937553,2.0074186044815665,2.261719906500845,1.5137749005617904,1.109884597354701,1.3342680991364173,1.3492269992551984,1.274432498661293,0},{0,1.6484050016308203,0.48161079236589527,-0.4308821148797512,-0.5056766154736566,-0.3860054145234079,-1.1339504204624624,-1.223703821175149,-1.1339504204624624,-0.7898957177304973,-0.17658081286047267,1.4988160004430093,1.9027063036500986,1.753117302462288,1.9176652037688797,1.8727885034125364,0.7059942941476116,-0.041950711791442864,0.27218619070296,1.3941036996115417,2.0522953048379096,1.9027063036500986,1.6484050016308203,1.4988160004430093,1.3492269992551984,0},{0,1.0650078969983576,0.7508709945039549,-0.32616981404828355,-0.4458410149985323,-0.8347724180868406,-1.2984983217690544,-1.1937860209375868,-0.9544436190370893,-0.5505533158299999,-0.07186851202900504,1.5436927007993526,1.812952902937412,1.6932817019871635,1.9176652037688797,0.6760764939100494,-0.8198135179680595,-0.8796491184431838,-0.8497313182056216,-0.400964314642189,1.289391398780074,1.947583004006442,1.6932817019871635,1.2295557983049497,1.0201311966420143,0},{0,0.07772048915880585,0.7807887947415171,-0.22145751321681592,-0.4308821148797512,-1.0441970197497759,-1.2536216214127112,-1.0441970197497759,-0.14666301262291048,0.4516929921283331,0.601281993316144,1.588569401155696,1.753117302462288,1.768076202581069,1.5287338006805715,-0.5206355155924377,-0.7898957177304973,-0.5355944157112188,-0.6702245167802486,-0.9843614192746515,-0.026991811672661774,1.3043502988988551,1.1697201978298253,0.8705421954542035,0.7508709945039549,0},{0,-0.11674521238534831,0.8705421954542035,0.017884888683681495,-0.6851834168990297,-1.1339504204624624,-1.074114819987338,-0.730060117255373,0.1375560896339302,0.3021039909405222,0.7359120943851738,1.9176652037688797,1.9176652037688797,1.962541904125223,1.0350900967607954,-0.7898957177304973,-0.5954300161863432,-0.8048546178492784,-0.8347724180868406,-0.8198135179680595,-0.7749368176117162,0.5863230931973629,1.0949256972359198,0.9602955961668901,0.2871450908217411,0},{0,-0.10178631226656722,0.8555832953354224,0.1525149897527113,-0.730060117255373,-1.0292381196309948,-0.7151012171365919,-0.25137531345437814,0.1525149897527113,0.1375560896339302,1.1547612977110442,1.947583004006442,1.797994002818631,1.812952902937412,0.6910353940288305,-0.7151012171365919,-0.400964314642189,-0.4159232147609701,-0.5804711160675621,-0.8347724180868406,-1.0441970197497759,-0.07186851202900504,1.0650078969983576,0.945336696048109,-0.19153971297925376,0},{0,-0.1317041125041294,0.7359120943851738,0.1525149897527113,-0.8048546178492784,-0.8646902183244027,-0.35608761428584573,0.2572272905841789,0.5414463928410196,0.5264874927222385,1.274432498661293,1.5586516009181337,1.5436927007993526,1.6484050016308203,0.6611175937912683,-0.6403067165426864,-0.31121091392950245,-0.07186851202900504,-0.3860054145234079,-0.6702245167802486,-1.0441970197497759,-0.6103889163051243,0.601281993316144,0.48161079236589527,-0.6253478164239054,0},{0,-0.05690961191022395,0.616240893434925,0.436734092009552,-0.23641641333559701,0.03284378880246258,0.6461586936724872,1.289391398780074,1.6334461015120392,1.6334461015120392,1.7381584023435068,1.812952902937412,1.8279118030561932,1.8428707031749743,0.8555832953354224,-0.565512215948781,-0.28129311369194027,0.33202179117808434,0.2871450908217411,-0.400964314642189,-0.8497313182056216,-0.9993203193934326,-0.08682741214778612,-0.22145751321681592,-1.0292381196309948,0},{0,-0.05690961191022395,0.3619395914156465,0.07772048915880585,-0.28129311369194027,-0.1317041125041294,0.03284378880246258,0.21235059022783564,0.34698069129686543,0.4217751918907709,0.5115285926034574,0.5264874927222385,0.48161079236589527,0.49656969248467636,0.1674738898714924,-0.6403067165426864,-0.22145751321681592,-0.23641641333559701,-0.19153971297925376,-0.745019017374154,-0.9544436190370893,-1.223703821175149,-0.9993203193934326,-1.1189915203436813,-1.2685805215314923,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}}; 
#endif