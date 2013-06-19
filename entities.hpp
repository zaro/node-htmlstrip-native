/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf -t --output-file entities.hpp  */
/* Computed positions: -k'1-8,12,14' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

struct entity { const char *name; const uint16_t code;};

#define TOTAL_KEYWORDS 2232
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 32
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 15511
/* maximum key range = 15510, duplicates = 0 */

class EntityLookup
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct entity *lookup_entity (const char *str, unsigned int len);
};

inline unsigned int
EntityLookup::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512,     0,    60,    15,    20,    25, 15512,    90,   280,
          0,     0,     0, 15512,     5,  3060,  3035,    30,   230,  2900,
       1985,  3425,   320,   185,  3555,     0,   420,  1685,   970,  1835,
       1850,   430,   745,   210,   770,   205,   590,   480,  1595,   290,
        350,   900,  3370,  1240,    90,   730,   545,  1210,    30,  1340,
       1135,   500,   250,   645,   190,  2210,   820,  3260,  2230,  3545,
         20,   145,    15,    50,    10,   100,     0,    55,   220,    25,
       2440,     5,  1570,   610,  3951,  4666,   320,  3633,  3130,  2755,
       3874,   120,   110,   755,  1430,  1250, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]+1];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]+2];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]+3];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]+5];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]+13];
        break;
    }
  return hval;
}

const struct entity *
EntityLookup::lookup_entity (register const char *str, register unsigned int len)
{
  static const struct entity wordlist[] =
    {
      {"gt",62},
      {"gt;",62},
      {"lt",60},
      {"lt;",60},
      {"ap;",8776},
      {"lrm;",8206},
      {"eta;",951},
      {"epsi;",949},
      {"epsiv;",1013},
      {"gnsim;",8935},
      {"lnsim;",8934},
      {"Upsi;",978},
      {"lpar;",40},
      {"epar;",8917},
      {"ensp;",8194},
      {"eqsim;",8770},
      {"gnap;",10890},
      {"lnap;",10889},
      {"wr;",8768},
      {"wp;",8472},
      {"cup;",8746},
      {"ltri;",9667},
      {"lrarr;",8646},
      {"erarr;",10609},
      {"euml",235},
      {"euml;",235},
      {"crarr;",8629},
      {"hbar;",8463},
      {"auml",228},
      {"auml;",228},
      {"lbarr;",10508},
      {"Uuml",220},
      {"Uuml;",220},
      {"euro;",8364},
      {"dtri;",9663},
      {"cupor;",10821},
      {"ast;",42},
      {"bnot;",8976},
      {"dsol;",10742},
      {"duarr;",8693},
      {"it;",8290},
      {"eng;",331},
      {"ang;",8736},
      {"comp;",8705},
      {"in;",8712},
      {"dot;",729},
      {"eDot;",8785},
      {"loarr;",8701},
      {"af;",8289},
      {"gne;",10888},
      {"bump;",8782},
      {"lne;",10887},
      {"angrt;",8735},
      {"Lt;",8810},
      {"ape;",8778},
      {"bbrk;",9141},
      {"int;",8747},
      {"equiv;",8801},
      {"bsol;",92},
      {"hoarr;",8703},
      {"ltrie;",8884},
      {"eparsl;",10723},
      {"frac12",189},
      {"frac12;",189},
      {"vprop;",8733},
      {"lbrke;",10635},
      {"iuml",239},
      {"iuml;",239},
      {"frac14",188},
      {"frac14;",188},
      {"bot;",8869},
      {"dharr;",8642},
      {"frac15;",8533},
      {"gfr;",55349},
      {"frac16;",8537},
      {"lfr;",55349},
      {"fork;",8916},
      {"frac34",190},
      {"frac34;",190},
      {"efr;",55349},
      {"forkv;",10969},
      {"frac35;",8535},
      {"cfr;",55349},
      {"frac45;",8536},
      {"afr;",55349},
      {"Yuml;",376},
      {"jfr;",55349},
      {"lHar;",10594},
      {"frac56;",8538},
      {"Ufr;",55349},
      {"csup;",10960},
      {"frac13;",8531},
      {"quot",34},
      {"quot;",34},
      {"eogon;",281},
      {"curren",164},
      {"curren;",164},
      {"Mu;",924},
      {"dfr;",55349},
      {"aogon;",261},
      {"gtrarr;",10616},
      {"hfr;",55349},
      {"frac25;",8534},
      {"Uogon;",370},
      {"bne;",61},
      {"frac18;",8539},
      {"dHar;",10597},
      {"cuepr;",8926},
      {"frac38;",8540},
      {"dharl;",8643},
      {"lparlt;",10643},
      {"Qfr;",55349},
      {"frac58;",8541},
      {"frac23;",8532},
      {"ffr;",55349},
      {"wfr;",55349},
      {"bumpe;",8783},
      {"angle;",8736},
      {"vfr;",55349},
      {"curarr;",8631},
      {"gneq;",10888},
      {"gneqq;",8809},
      {"lneq;",10887},
      {"lneqq;",8808},
      {"coprod;",8720},
      {"ge;",8805},
      {"bfr;",55349},
      {"le;",8804},
      {"ges;",10878},
      {"lopar;",10629},
      {"bottom;",8869},
      {"ee;",8519},
      {"les;",10877},
      {"frac78;",8542},
      {"geq;",8805},
      {"leq;",8804},
      {"gtdot;",8919},
      {"copy",169},
      {"copy;",169},
      {"ltdot;",8918},
      {"boxDr;",9555},
      {"ctdot;",8943},
      {"and;",8743},
      {"gesl;",8923},
      {"Hfr;",8460},
      {"Ffr;",55349},
      {"bumpeq;",8783},
      {"ifr;",55349},
      {"dtdot;",8945},
      {"csupe;",10962},
      {"bumpE;",10926},
      {"conint;",8750},
      {"Star;",8902},
      {"Yfr;",55349},
      {"iogon;",303},
      {"Sum;",8721},
      {"boxDl;",9558},
      {"Dot;",168},
      {"esdot;",8784},
      {"gg;",8811},
      {"Lfr;",55349},
      {"lg;",8822},
      {"eg;",10906},
      {"Sup;",8913},
      {"DD;",8517},
      {"egs;",10902},
      {"nu;",957},
      {"cent",162},
      {"cent;",162},
      {"check;",10003},
      {"epsilon;",949},
      {"Int;",8748},
      {"iota;",953},
      {"qfr;",55349},
      {"gtrless;",8823},
      {"npar;",8742},
      {"boxDR;",9556},
      {"Upsilon;",933},
      {"num;",35},
      {"hearts;",9829},
      {"nbsp",160},
      {"nbsp;",160},
      {"leg;",8922},
      {"Sqrt;",8730},
      {"boxUr;",9561},
      {"Mfr;",55349},
      {"npart;",8706},
      {"gtrapprox;",10886},
      {"angmsd;",8737},
      {"Iuml",207},
      {"Iuml;",207},
      {"vert;",124},
      {"npr;",8832},
      {"geqq;",8807},
      {"nrarr;",8603},
      {"equals;",61},
      {"leqq;",8806},
      {"nrarrw;",8605},
      {"deg",176},
      {"deg;",176},
      {"nwarr;",8598},
      {"copysr;",8471},
      {"dotplus;",8724},
      {"lsqb;",91},
      {"forall;",8704},
      {"loz;",9674},
      {"Gt;",8811},
      {"angmsdab;",10665},
      {"curarrm;",10556},
      {"Eta;",919},
      {"Dfr;",55349},
      {"boxUl;",9564},
      {"gesles;",10900},
      {"boxplus;",8862},
      {"not",172},
      {"bsolb;",10693},
      {"not;",172},
      {"Jfr;",55349},
      {"ggg;",8921},
      {"gvertneqq;",8809},
      {"grave;",96},
      {"lvertneqq;",8808},
      {"ntgl;",8825},
      {"boxUR;",9562},
      {"Xfr;",55349},
      {"checkmark;",10003},
      {"nvsim;",8764},
      {"Euml",203},
      {"Euml;",203},
      {"hercon;",8889},
      {"vee;",8744},
      {"xrarr;",10230},
      {"notin;",8713},
      {"bernou;",8492},
      {"lbrkslu;",10637},
      {"lhard;",8637},
      {"Sfr;",55349},
      {"boxv;",9474},
      {"boxvH;",9578},
      {"nharr;",8622},
      {"nvap;",8781},
      {"Union;",8899},
      {"nparsl;",11005},
      {"gsim;",8819},
      {"angmsdah;",10671},
      {"lsim;",8818},
      {"Rho;",929},
      {"esim;",8770},
      {"gescc;",10921},
      {"bprime;",8245},
      {"Ifr;",8465},
      {"lescc;",10920},
      {"beta;",946},
      {"Nu;",925},
      {"infin;",8734},
      {"boxvr;",9500},
      {"nfr;",55349},
      {"nbump;",8782},
      {"Iogon;",302},
      {"csub;",10959},
      {"iprod;",10812},
      {"nsup;",8837},
      {"cwint;",8753},
      {"awint;",10769},
      {"angmsdaf;",10669},
      {"Zfr;",8488},
      {"nvgt;",62},
      {"chi;",967},
      {"Iota;",921},
      {"DotDot;",8412},
      {"ange;",10660},
      {"boxvl;",9508},
      {"xharr;",10231},
      {"LT",60},
      {"LT;",60},
      {"iexcl",161},
      {"iexcl;",161},
      {"nspar;",8742},
      {"doteq;",8784},
      {"bsim;",8765},
      {"gsiml;",10896},
      {"ltimes;",8905},
      {"Rfr;",8476},
      {"nLt;",8810},
      {"andand;",10837},
      {"Auml",196},
      {"Auml;",196},
      {"Efr;",55349},
      {"loang;",10220},
      {"Not;",10988},
      {"cuvee;",8910},
      {"ne;",8800},
      {"xfr;",55349},
      {"boxvR;",9566},
      {"qprime;",8279},
      {"iff;",8660},
      {"gsime;",10894},
      {"Gfr;",55349},
      {"lsime;",10893},
      {"Eogon;",280},
      {"bNot;",10989},
      {"nesim;",8770},
      {"notindot;",8949},
      {"andv;",10842},
      {"gdot;",289},
      {"nhpar;",10994},
      {"edot;",279},
      {"lotimes;",10804},
      {"cdot;",267},
      {"csube;",10961},
      {"lbrksld;",10639},
      {"nsupe;",8841},
      {"cedil",184},
      {"cedil;",184},
      {"dd;",8518},
      {"vsupne;",8843},
      {"boxV;",9553},
      {"boxVH;",9580},
      {"breve;",728},
      {"gtcir;",10874},
      {"ltcir;",10873},
      {"nearr;",8599},
      {"Re;",8476},
      {"nrarrc;",10547},
      {"intprod;",10812},
      {"isin;",8712},
      {"drcrop;",8972},
      {"angmsdae;",10668},
      {"isinv;",8712},
      {"Pr;",10939},
      {"boxVr;",9567},
      {"Nfr;",55349},
      {"cudarrr;",10549},
      {"gscr;",8458},
      {"UpTee;",8869},
      {"jsercy;",1112},
      {"gap;",10886},
      {"lscr;",55349},
      {"bsime;",8909},
      {"drcorn;",8991},
      {"lap;",10885},
      {"escr;",8495},
      {"lat;",10923},
      {"cscr;",55349},
      {"cap;",8745},
      {"ascr;",55349},
      {"lbrace;",123},
      {"jscr;",55349},
      {"Uscr;",55349},
      {"ngsim;",8821},
      {"gtreqless;",8923},
      {"ddarr;",8650},
      {"nsupE;",10950},
      {"dscr;",55349},
      {"ngt;",8815},
      {"hscr;",55349},
      {"nvHarr;",10500},
      {"Afr;",55349},
      {"gtcc;",10919},
      {"comma;",44},
      {"ltcc;",10918},
      {"ngtr;",8815},
      {"doteqdot;",8785},
      {"larr;",8592},
      {"boxVl;",9570},
      {"Qscr;",55349},
      {"Aogon;",260},
      {"ac;",8766},
      {"fscr;",55349},
      {"Uarr;",8607},
      {"cupbrcap;",10824},
      {"wscr;",55349},
      {"nsucc;",8833},
      {"caron;",711},
      {"vscr;",55349},
      {"darr;",8595},
      {"larrtl;",8610},
      {"angmsdag;",10670},
      {"harr;",8596},
      {"nsmid;",8740},
      {"boxVR;",9568},
      {"Epsilon;",917},
      {"bscr;",55349},
      {"UpTeeArrow;",8613},
      {"Equal;",10869},
      {"Gg;",8921},
      {"easter;",10862},
      {"lbbrk;",10098},
      {"Vbar;",10987},
      {"xodot;",10752},
      {"lcaron;",318},
      {"ecaron;",283},
      {"ccaron;",269},
      {"ecolon;",8789},
      {"ltrPar;",10646},
      {"Zeta;",918},
      {"varr;",8597},
      {"cupcap;",10822},
      {"isins;",8948},
      {"larrpl;",10553},
      {"Hscr;",8459},
      {"wreath;",8768},
      {"Fscr;",8497},
      {"dcaron;",271},
      {"Hat;",94},
      {"iscr;",55349},
      {"lrcorner;",8991},
      {"Wfr;",55349},
      {"And;",10835},
      {"larrlp;",8619},
      {"centerdot;",183},
      {"nge;",8817},
      {"Yscr;",55349},
      {"cemptyv;",10674},
      {"complexes;",8450},
      {"lobrk;",10214},
      {"GT",62},
      {"GT;",62},
      {"nsim;",8769},
      {"equest;",8799},
      {"npre;",10927},
      {"commat;",64},
      {"Lscr;",8466},
      {"complement;",8705},
      {"yuml",255},
      {"yuml;",255},
      {"ic;",8291},
      {"isinE;",8953},
      {"Tfr;",55349},
      {"zwnj;",8204},
      {"demptyv;",10673},
      {"nsub;",8836},
      {"nexist;",8708},
      {"dwangle;",10662},
      {"qscr;",55349},
      {"mp;",8723},
      {"Pfr;",55349},
      {"gbreve;",287},
      {"zfr;",55349},
      {"dscy;",1109},
      {"lhblk;",9604},
      {"Mscr;",8499},
      {"numero;",8470},
      {"Map;",10501},
      {"nbumpe;",8783},
      {"abreve;",259},
      {"mu;",956},
      {"Larr;",8606},
      {"Ubreve;",364},
      {"nedot;",8784},
      {"xotime;",10754},
      {"intcal;",8890},
      {"varpropto;",8733},
      {"NotCongruent;",8802},
      {"egrave",232},
      {"egrave;",232},
      {"chcy;",1095},
      {"ccaps;",10829},
      {"female;",9792},
      {"bemptyv;",10672},
      {"agrave",224},
      {"agrave;",224},
      {"hamilt;",8459},
      {"Esim;",10867},
      {"Ugrave",217},
      {"Ugrave;",217},
      {"Dscr;",55349},
      {"veeeq;",8794},
      {"approx;",8776},
      {"Vfr;",55349},
      {"nLtv;",8810},
      {"lsquo;",8216},
      {"lsquor;",8218},
      {"ETH",208},
      {"UnderBar;",95},
      {"ETH;",208},
      {"Lcaron;",317},
      {"Jsercy;",1032},
      {"ngeq;",8817},
      {"ngeqq;",8807},
      {"nsime;",8772},
      {"Jscr;",55349},
      {"Idot;",304},
      {"iquest",191},
      {"iquest;",191},
      {"lsimg;",10895},
      {"Xscr;",55349},
      {"lceil;",8968},
      {"Darr;",8609},
      {"nsube;",8840},
      {"Square;",9633},
      {"aring",229},
      {"aring;",229},
      {"eqcirc;",8790},
      {"acute",180},
      {"acute;",180},
      {"mho;",8487},
      {"Uring;",366},
      {"vsubne;",8842},
      {"yfr;",55349},
      {"nprec;",8832},
      {"Zdot;",379},
      {"asymp;",8776},
      {"Sscr;",55349},
      {"LeftFloor;",8970},
      {"vnsup;",8835},
      {"eqcolon;",8789},
      {"iocy;",1105},
      {"capand;",10820},
      {"nsimeq;",8772},
      {"Superset;",8835},
      {"nvge;",8805},
      {"larrb;",8676},
      {"mstpos;",8766},
      {"nsc;",8833},
      {"Iscr;",8464},
      {"ccups;",10828},
      {"Dcaron;",270},
      {"nexists;",8708},
      {"acd;",8767},
      {"igrave",236},
      {"igrave;",236},
      {"nscr;",55349},
      {"nap;",8777},
      {"angmsdad;",10667},
      {"Sc;",10940},
      {"YIcy;",1031},
      {"nsubE;",10949},
      {"Edot;",278},
      {"Zscr;",55349},
      {"YUcy;",1070},
      {"LeftArrow;",8592},
      {"boxur;",9492},
      {"mfr;",55349},
      {"Gdot;",288},
      {"Assign;",8788},
      {"LeftArrowBar;",8676},
      {"Sub;",8912},
      {"Vert;",8214},
      {"Kfr;",55349},
      {"angmsdaa;",10664},
      {"Cup;",8915},
      {"brvbar",166},
      {"brvbar;",166},
      {"eqslantgtr;",10902},
      {"Scaron;",352},
      {"boxH;",9552},
      {"RoundImplies;",10608},
      {"Rscr;",8475},
      {"approxeq;",8778},
      {"mumap;",8888},
      {"Escr;",8496},
      {"gnE;",8809},
      {"boxul;",9496},
      {"lnE;",8808},
      {"xscr;",55349},
      {"ngeqslant;",10878},
      {"apE;",10864},
      {"Gscr;",55349},
      {"ncaron;",328},
      {"ncap;",10819},
      {"ENG;",330},
      {"xvee;",8897},
      {"NotLessSlantEqual;",10877},
      {"zeta;",950},
      {"NotLess;",8814},
      {"Rarr;",8608},
      {"Zcaron;",381},
      {"boxuR;",9560},
      {"yen",165},
      {"yen;",165},
      {"horbar;",8213},
      {"angmsdac;",10666},
      {"Therefore;",8756},
      {"late;",10925},
      {"napos;",329},
      {"Vee;",8897},
      {"DScy;",1029},
      {"hookleftarrow;",8617},
      {"Rarrtl;",10518},
      {"looparrowleft;",8619},
      {"Rcaron;",344},
      {"Nscr;",55349},
      {"gtquest;",10876},
      {"Psi;",936},
      {"Ecaron;",282},
      {"ltquest;",10875},
      {"caret;",8257},
      {"iecy;",1077},
      {"xcap;",8898},
      {"atilde",227},
      {"atilde;",227},
      {"nsupset;",8835},
      {"Bfr;",55349},
      {"HumpEqual;",8783},
      {"Utilde;",360},
      {"ecir;",8790},
      {"Cfr;",8493},
      {"ccupssm;",10832},
      {"lcub;",123},
      {"vnsub;",8834},
      {"eth",240},
      {"eth;",240},
      {"ncup;",10818},
      {"gl;",8823},
      {"Ascr;",55349},
      {"ll;",8810},
      {"DZcy;",1039},
      {"Igrave",204},
      {"Igrave;",204},
      {"el;",10905},
      {"els;",10901},
      {"zeetrf;",8488},
      {"Phi;",934},
      {"looparrowright;",8620},
      {"NotGreater;",8815},
      {"Bumpeq;",8782},
      {"gla;",10917},
      {"Prime;",8243},
      {"isindot;",8949},
      {"gjcy;",1107},
      {"ljcy;",1113},
      {"div;",247},
      {"diam;",8900},
      {"nsucceq;",10928},
      {"lates;",10925},
      {"larrbfs;",10527},
      {"ShortLeftArrow;",8592},
      {"boxDL;",9559},
      {"weierp;",8472},
      {"napprox;",8777},
      {"lsh;",8624},
      {"SHcy;",1064},
      {"Ncaron;",327},
      {"GreaterSlantEqual;",10878},
      {"djcy;",1106},
      {"lrtri;",8895},
      {"incare;",8453},
      {"cir;",9675},
      {"disin;",8946},
      {"ltrif;",9666},
      {"hairsp;",8202},
      {"llarr;",8647},
      {"ddotseq;",10871},
      {"flat;",9837},
      {"xcup;",8899},
      {"Gbreve;",286},
      {"gamma;",947},
      {"dtrif;",9662},
      {"itilde;",297},
      {"Egrave",200},
      {"Egrave;",200},
      {"Wscr;",55349},
      {"zdot;",380},
      {"nsupseteq;",8841},
      {"nsupseteqq;",10950},
      {"ZHcy;",1046},
      {"bcong;",8780},
      {"ii;",8520},
      {"Conint;",8751},
      {"QUOT",34},
      {"QUOT;",34},
      {"gcirc;",285},
      {"vrtri;",8883},
      {"ecirc",234},
      {"ecirc;",234},
      {"ccirc;",265},
      {"acirc",226},
      {"acirc;",226},
      {"Updownarrow;",8661},
      {"jcirc;",309},
      {"compfn;",8728},
      {"Ucirc",219},
      {"Ucirc;",219},
      {"Tscr;",55349},
      {"boxUL;",9565},
      {"NotLessLess;",8810},
      {"Precedes;",8826},
      {"UpperLeftArrow;",8598},
      {"apacir;",10863},
      {"apos",39},
      {"apos;",39},
      {"hcirc;",293},
      {"infintie;",10717},
      {"Pscr;",55349},
      {"verbar;",124},
      {"zscr;",55349},
      {"UnderParenthesis;",9181},
      {"die;",168},
      {"circ;",710},
      {"Ll;",8920},
      {"diams;",9830},
      {"boxbox;",10697},
      {"ldca;",10550},
      {"blank;",9251},
      {"lrhar;",8651},
      {"cong;",8773},
      {"napid;",8779},
      {"leftarrow;",8592},
      {"gtrdot;",8919},
      {"wcirc;",373},
      {"cups;",8746},
      {"boxdr;",9484},
      {"cupdot;",8845},
      {"Abreve;",258},
      {"LeftArrowRightArrow;",8646},
      {"lagran;",8466},
      {"drbkarow;",10512},
      {"SquareSubset;",8847},
      {"Vscr;",55349},
      {"block;",9608},
      {"Lsh;",8624},
      {"ForAll;",8704},
      {"capcap;",10827},
      {"Agrave",192},
      {"Agrave;",192},
      {"duhar;",10607},
      {"nvdash;",8876},
      {"boxHd;",9572},
      {"gammad;",989},
      {"NotNestedGreaterGreater;",10914},
      {"Tcaron;",356},
      {"lgE;",10897},
      {"Beta;",914},
      {"Hcirc;",292},
      {"NotNestedLessLess;",10913},
      {"Tau;",932},
      {"boxdl;",9488},
      {"veebar;",8891},
      {"SquareSubsetEqual;",8849},
      {"icirc",238},
      {"icirc;",238},
      {"SquareUnion;",8852},
      {"gnapprox;",10890},
      {"nsce;",10928},
      {"lnapprox;",10889},
      {"zcaron;",382},
      {"qint;",10764},
      {"Ycirc;",374},
      {"yscr;",55349},
      {"lharu;",8636},
      {"angst;",197},
      {"inodot;",305},
      {"SquareSuperset;",8848},
      {"cross;",10007},
      {"SquareSupersetEqual;",8850},
      {"fltns;",9649},
      {"Xi;",926},
      {"Uarrocir;",10569},
      {"boxdR;",9554},
      {"lharul;",10602},
      {"capbrcup;",10825},
      {"Aring",197},
      {"Aring;",197},
      {"frasl;",8260},
      {"ldquo;",8220},
      {"ldquor;",8222},
      {"npreceq;",10927},
      {"lesg;",8922},
      {"bsemi;",8271},
      {"nwnear;",10535},
      {"asympeq;",8781},
      {"boxvL;",9569},
      {"loplus;",10797},
      {"andd;",10844},
      {"Itilde;",296},
      {"GreaterLess;",8823},
      {"dotsquare;",8865},
      {"cupcup;",10826},
      {"ntilde",241},
      {"ntilde;",241},
      {"nsubset;",8834},
      {"lrhard;",10605},
      {"integers;",8484},
      {"Theta;",920},
      {"kfr;",55349},
      {"NotSquareSuperset;",8848},
      {"NotSquareSupersetEqual;",8931},
      {"laquo",171},
      {"laquo;",171},
      {"circeq;",8791},
      {"ni;",8715},
      {"nis;",8956},
      {"Leftarrow;",8656},
      {"dotminus;",8760},
      {"mscr;",55349},
      {"map;",8614},
      {"leftleftarrows;",8647},
      {"lsaquo;",8249},
      {"niv;",8715},
      {"Kscr;",55349},
      {"NotGreaterLess;",8825},
      {"DoubleContourIntegral;",8751},
      {"Chi;",935},
      {"ShortDownArrow;",8595},
      {"bdquo;",8222},
      {"boxminus;",8863},
      {"TScy;",1062},
      {"nlsim;",8820},
      {"DoubleUpDownArrow;",8661},
      {"njcy;",1114},
      {"ncong;",8775},
      {"wedbar;",10847},
      {"zhcy;",1078},
      {"Breve;",728},
      {"gE;",8807},
      {"nlt;",8814},
      {"tbrk;",9140},
      {"barvee;",8893},
      {"lE;",8806},
      {"gcy;",1075},
      {"Jcirc;",308},
      {"lcy;",1083},
      {"ecy;",1101},
      {"Uparrow;",8657},
      {"curvearrowleft;",8630},
      {"nrtri;",8939},
      {"acy;",1072},
      {"jcy;",1081},
      {"yucy;",1102},
      {"gesdot;",10880},
      {"Ucy;",1059},
      {"erDot;",8787},
      {"lesdot;",10879},
      {"nlarr;",8602},
      {"top;",8868},
      {"harrw;",8621},
      {"xi;",958},
      {"dcy;",1076},
      {"UnderBrace;",9183},
      {"nvrArr;",10499},
      {"UnderBracket;",9141},
      {"lesdotor;",10883},
      {"Scirc;",348},
      {"lesges;",10899},
      {"bigoplus;",10753},
      {"nVdash;",8878},
      {"quatint;",10774},
      {"nsubseteq;",8840},
      {"nsubseteqq;",10949},
      {"Cdot;",266},
      {"cuesc;",8927},
      {"fcy;",1092},
      {"blacksquare;",9642},
      {"Icirc",206},
      {"Icirc;",206},
      {"boxtimes;",8864},
      {"boxVL;",9571},
      {"vcy;",1074},
      {"thorn",254},
      {"thorn;",254},
      {"Rsh;",8625},
      {"NotLessTilde;",8820},
      {"bcy;",1073},
      {"Ntilde",209},
      {"Ntilde;",209},
      {"apid;",8779},
      {"nesear;",10536},
      {"dzcy;",1119},
      {"lthree;",8907},
      {"AMP",38},
      {"marker;",9646},
      {"AMP;",38},
      {"quest;",63},
      {"nle;",8816},
      {"Bscr;",8492},
      {"xlarr;",10229},
      {"egsdot;",10904},
      {"LeftTee;",8867},
      {"lEg;",10891},
      {"diamond;",8900},
      {"tfr;",55349},
      {"Cscr;",55349},
      {"Cap;",8914},
      {"xutri;",9651},
      {"Fcy;",1060},
      {"heartsuit;",9829},
      {"Atilde",195},
      {"Atilde;",195},
      {"icy;",1080},
      {"hybull;",8259},
      {"notni;",8716},
      {"cire;",8791},
      {"Gamma;",915},
      {"tosa;",10537},
      {"lBarr;",10510},
      {"ncongdot;",10861},
      {"Ycy;",1067},
      {"eDDot;",10871},
      {"digamma;",989},
      {"lAarr;",8666},
      {"Ecirc",202},
      {"Ecirc;",202},
      {"star;",9734},
      {"efDot;",8786},
      {"lArr;",8656},
      {"xcirc;",9711},
      {"gimel;",8503},
      {"spar;",8741},
      {"ShortRightArrow;",8594},
      {"Lcy;",1051},
      {"Gcirc;",284},
      {"sum;",8721},
      {"vBar;",10984},
      {"diamondsuit;",9830},
      {"Intersection;",8898},
      {"vBarv;",10985},
      {"numsp;",8199},
      {"dArr;",8659},
      {"models;",8871},
      {"gesdoto;",10882},
      {"sup;",8835},
      {"hArr;",8660},
      {"quaternions;",8461},
      {"lesdoto;",10881},
      {"ngE;",8807},
      {"sup1",185},
      {"sup1;",185},
      {"srarr;",8594},
      {"sup2",178},
      {"sup2;",178},
      {"sup3",179},
      {"sup3;",179},
      {"Mcy;",1052},
      {"swarr;",8601},
      {"DoubleUpArrow;",8657},
      {"Ccaron;",268},
      {"npolint;",10772},
      {"lowast;",8727},
      {"NotSquareSubset;",8847},
      {"vArr;",8661},
      {"NotSquareSubsetEqual;",8930},
      {"nleq;",8816},
      {"nleqq;",8806},
      {"GreaterTilde;",8819},
      {"SupersetEqual;",8839},
      {"clubs;",9827},
      {"Dcy;",1044},
      {"Cedilla;",184},
      {"acE;",8766},
      {"Vvdash;",8874},
      {"Succeeds;",8827},
      {"nldr;",8229},
      {"KHcy;",1061},
      {"UpperRightArrow;",8599},
      {"iiint;",8749},
      {"Or;",10836},
      {"Hacek;",711},
      {"Jcy;",1049},
      {"fnof;",402},
      {"Gammad;",988},
      {"toea;",10536},
      {"squ;",9633},
      {"Acirc",194},
      {"Acirc;",194},
      {"xuplus;",10756},
      {"CupCap;",8781},
      {"there4;",8756},
      {"lesseqgtr;",8922},
      {"Pi;",928},
      {"lurdshar;",10570},
      {"gopf;",55349},
      {"Scy;",1057},
      {"lopf;",55349},
      {"dlcrop;",8973},
      {"eopf;",55349},
      {"copf;",55349},
      {"aopf;",55349},
      {"sharp;",9839},
      {"bkarow;",10509},
      {"jopf;",55349},
      {"NotGreaterGreater;",8811},
      {"sfr;",55349},
      {"Uopf;",55349},
      {"dlcorn;",8990},
      {"Diamond;",8900},
      {"Laplacetrf;",8466},
      {"Ouml",214},
      {"Ouml;",214},
      {"xoplus;",10753},
      {"natur;",9838},
      {"Supset;",8913},
      {"Icy;",1048},
      {"dopf;",55349},
      {"xsqcup;",10758},
      {"eqvparsl;",10725},
      {"hopf;",55349},
      {"LeftVector;",8636},
      {"ssetmn;",8726},
      {"nwarrow;",8598},
      {"NotGreaterEqual;",8817},
      {"ncy;",1085},
      {"supne;",8843},
      {"wedge;",8743},
      {"iiiint;",10764},
      {"Qopf;",8474},
      {"strns;",175},
      {"tprime;",8244},
      {"fopf;",55349},
      {"Zcy;",1047},
      {"wopf;",55349},
      {"congdot;",10861},
      {"Wcirc;",372},
      {"vopf;",55349},
      {"boxHU;",9577},
      {"nrtrie;",8941},
      {"bigodot;",10752},
      {"Fouriertrf;",8497},
      {"iiota;",8489},
      {"laemptyv;",10676},
      {"lang;",10216},
      {"angsph;",8738},
      {"DownArrow;",8595},
      {"divide",247},
      {"divide;",247},
      {"backcong;",8780},
      {"bopf;",55349},
      {"Proportion;",8759},
      {"fpartint;",10765},
      {"nleqslant;",10877},
      {"larrfs;",10525},
      {"DownArrowBar;",10515},
      {"emsp;",8195},
      {"amp",38},
      {"amp;",38},
      {"CHcy;",1063},
      {"emsp14;",8197},
      {"therefore;",8756},
      {"wedgeq;",8793},
      {"notinva;",8713},
      {"excl;",33},
      {"sext;",10038},
      {"SHCHcy;",1065},
      {"Rcy;",1056},
      {"supnE;",10956},
      {"Ecy;",1069},
      {"Hopf;",8461},
      {"Fopf;",55349},
      {"semi;",59},
      {"emsp13;",8196},
      {"iopf;",55349},
      {"Gcy;",1043},
      {"kscr;",55349},
      {"boxuL;",9563},
      {"rpar;",41},
      {"llcorner;",8990},
      {"Yopf;",55349},
      {"homtht;",8763},
      {"caps;",8745},
      {"varpi;",982},
      {"capdot;",10816},
      {"Verbar;",8214},
      {"Ofr;",55349},
      {"andslope;",10840},
      {"nrArr;",8655},
      {"searr;",8600},
      {"lstrok;",322},
      {"supplus;",10944},
      {"Lopf;",55349},
      {"setmn;",8726},
      {"nwArr;",8662},
      {"rtri;",9657},
      {"rrarr;",8649},
      {"Barv;",10983},
      {"colon;",58},
      {"Tab;",9},
      {"latail;",10521},
      {"rbarr;",10509},
      {"qopf;",55349},
      {"Element;",8712},
      {"sstarf;",8902},
      {"dstrok;",273},
      {"hstrok;",295},
      {"bull;",8226},
      {"Mopf;",55349},
      {"lfloor;",8970},
      {"Ncy;",1053},
      {"topbot;",9014},
      {"emacr;",275},
      {"eqslantless;",10901},
      {"LeftTeeVector;",10586},
      {"boxh;",9472},
      {"amacr;",257},
      {"rho;",961},
      {"exponentiale;",8519},
      {"Umacr;",362},
      {"varkappa;",1008},
      {"ltlarr;",10614},
      {"hyphen;",8208},
      {"ycirc;",375},
      {"lambda;",955},
      {"dagger;",8224},
      {"Lang;",10218},
      {"RBarr;",10512},
      {"bsolhsub;",10184},
      {"IOcy;",1025},
      {"xrArr;",10233},
      {"bigcap;",8898},
      {"Acy;",1040},
      {"Dopf;",55349},
      {"roarr;",8702},
      {"ldrushar;",10571},
      {"Coproduct;",8720},
      {"lesseqqgtr;",10891},
      {"squarf;",9642},
      {"ThickSpace;",8287},
      {"isinsv;",8947},
      {"PrecedesTilde;",8830},
      {"divonx;",8903},
      {"upsi;",965},
      {"tdot;",8411},
      {"nhArr;",8654},
      {"capcup;",10823},
      {"gvnE;",8809},
      {"cularr;",8630},
      {"lvnE;",8808},
      {"NotPrecedes;",8832},
      {"intercal;",8890},
      {"Jopf;",55349},
      {"macr",175},
      {"macr;",175},
      {"Hstrok;",294},
      {"rtrie;",8885},
      {"nges;",10878},
      {"REG",174},
      {"REG;",174},
      {"Xopf;",55349},
      {"or;",8744},
      {"rbrke;",10636},
      {"hookrightarrow;",8618},
      {"vsupnE;",10956},
      {"cuwed;",8911},
      {"lessdot;",8918},
      {"PrecedesEqual;",10927},
      {"vangrt;",10652},
      {"rfr;",55349},
      {"orv;",10843},
      {"bigvee;",8897},
      {"nearrow;",8599},
      {"utri;",9653},
      {"uuml",252},
      {"uuml;",252},
      {"Sopf;",55349},
      {"oror;",10838},
      {"nprcue;",8928},
      {"rHar;",10596},
      {"circlearrowright;",8635},
      {"tscr;",55349},
      {"circledS;",9416},
      {"lozf;",10731},
      {"opar;",10679},
      {"Lstrok;",321},
      {"questeq;",8799},
      {"elinters;",9191},
      {"xnis;",8955},
      {"longmapsto;",10236},
      {"uuarr;",8648},
      {"imacr;",299},
      {"LeftUpVector;",8639},
      {"Iopf;",55349},
      {"Kappa;",922},
      {"gel;",8923},
      {"supe;",8839},
      {"xhArr;",10234},
      {"ssmile;",8995},
      {"nopf;",55349},
      {"orarr;",8635},
      {"ouml",246},
      {"ouml;",246},
      {"khcy;",1093},
      {"Sigma;",931},
      {"triplus;",10809},
      {"nGt;",8811},
      {"yacy;",1103},
      {"thinsp;",8201},
      {"Zopf;",8484},
      {"expectation;",8496},
      {"osol;",8856},
      {"downarrow;",8595},
      {"Tcy;",1058},
      {"dblac;",733},
      {"frown;",8994},
      {"Im;",8465},
      {"ropar;",10630},
      {"Lambda;",923},
      {"Pcy;",1055},
      {"lessapprox;",10885},
      {"oS;",9416},
      {"zcy;",1079},
      {"ohm;",937},
      {"boxvh;",9532},
      {"Dstrok;",272},
      {"uharr;",8638},
      {"tcaron;",357},
      {"clubsuit;",9827},
      {"lbrack;",91},
      {"Ropf;",8477},
      {"mnplus;",8723},
      {"tau;",964},
      {"Udblac;",368},
      {"nang;",8736},
      {"Eopf;",55349},
      {"xdtri;",9661},
      {"COPY",169},
      {"COPY;",169},
      {"bullet;",8226},
      {"xopf;",55349},
      {"kgreen;",312},
      {"real;",8476},
      {"glE;",10898},
      {"shortparallel;",8741},
      {"Gopf;",55349},
      {"neArr;",8663},
      {"ufr;",55349},
      {"nGg;",8921},
      {"langd;",10641},
      {"beth;",8502},
      {"uHar;",10595},
      {"Dagger;",8225},
      {"cularrp;",10557},
      {"Vcy;",1042},
      {"uogon;",371},
      {"uharl;",8639},
      {"mid;",8739},
      {"sdot;",8901},
      {"Ccirc;",264},
      {"THORN",222},
      {"THORN;",222},
      {"mcomma;",10793},
      {"ThinSpace;",8201},
      {"Ubrcy;",1038},
      {"ofr;",55349},
      {"notinE;",8953},
      {"tscy;",1094},
      {"Rang;",10219},
      {"reg",174},
      {"mldr;",8230},
      {"reg;",174},
      {"ContourIntegral;",8750},
      {"theta;",952},
      {"rnmid;",10990},
      {"boxdL;",9557},
      {"operp;",10681},
      {"angrtvb;",8894},
      {"ycy;",1099},
      {"nabla;",8711},
      {"square;",9633},
      {"Nopf;",8469},
      {"lessgtr;",8822},
      {"lowbar;",95},
      {"lozenge;",9674},
      {"nvlt;",60},
      {"langle;",10216},
      {"xmap;",10236},
      {"rsqb;",93},
      {"sscr;",55349},
      {"cylcty;",9005},
      {"longleftarrow;",10229},
      {"utdot;",8944},
      {"colone;",8788},
      {"trie;",8796},
      {"Imacr;",298},
      {"divideontimes;",8903},
      {"boxHu;",9575},
      {"ShortUpArrow;",8593},
      {"Aopf;",55349},
      {"reals;",8477},
      {"hardcy;",1098},
      {"Otimes;",10807},
      {"rhov;",1009},
      {"boxVh;",9579},
      {"LeftTriangle;",8882},
      {"ord;",10845},
      {"amalg;",10815},
      {"sc;",8827},
      {"ordm",186},
      {"ordm;",186},
      {"sdote;",10854},
      {"Del;",8711},
      {"mcy;",1084},
      {"boxhd;",9516},
      {"Downarrow;",8659},
      {"scsim;",8831},
      {"Kcy;",1050},
      {"succ;",8827},
      {"LeftTriangleEqual;",8884},
      {"NotGreaterSlantEqual;",10878},
      {"rbrkslu;",10640},
      {"HARDcy;",1066},
      {"rhard;",8641},
      {"becaus;",8757},
      {"sub;",8834},
      {"upsilon;",965},
      {"Cross;",10799},
      {"zwj;",8205},
      {"lltri;",9722},
      {"NotGreaterFullEqual;",8807},
      {"scaron;",353},
      {"circledR;",174},
      {"scap;",10936},
      {"Wedge;",8896},
      {"biguplus;",10756},
      {"vsubnE;",10955},
      {"orslope;",10839},
      {"Emacr;",274},
      {"Integral;",8747},
      {"Backslash;",8726},
      {"DoubleLongLeftArrow;",10232},
      {"nLl;",8920},
      {"DoubleLongLeftRightArrow;",10234},
      {"DoubleLeftArrow;",8656},
      {"geqslant;",10878},
      {"gacute;",501},
      {"leqslant;",10877},
      {"Wopf;",55349},
      {"lacute;",314},
      {"eacute",233},
      {"eacute;",233},
      {"cacute;",263},
      {"aacute",225},
      {"aacute;",225},
      {"Uacute",218},
      {"Uacute;",218},
      {"Oscr;",55349},
      {"cwconint;",8754},
      {"awconint;",8755},
      {"NestedLessLess;",8810},
      {"blk14;",9617},
      {"NotTilde;",8769},
      {"blk34;",9619},
      {"ogt;",10689},
      {"vltri;",8882},
      {"Topf;",55349},
      {"sqcap;",8851},
      {"pr;",8826},
      {"Longleftarrow;",10232},
      {"blk12;",9618},
      {"elsdot;",10903},
      {"ldsh;",8626},
      {"coloneq;",8788},
      {"Popf;",8473},
      {"nGtv;",8811},
      {"cudarrl;",10552},
      {"zopf;",55349},
      {"xwedge;",8896},
      {"rtimes;",8906},
      {"ogon;",731},
      {"prsim;",8830},
      {"kjcy;",1116},
      {"sqcaps;",8851},
      {"sce;",10928},
      {"Congruent;",8801},
      {"mDDot;",8762},
      {"blacklozenge;",10731},
      {"roang;",10221},
      {"fflig;",64256},
      {"notinvc;",8950},
      {"rpargt;",10644},
      {"prop;",8733},
      {"Bcy;",1041},
      {"sbquo;",8218},
      {"prap;",10935},
      {"YAcy;",1071},
      {"varrho;",1009},
      {"sect",167},
      {"sect;",167},
      {"DownTee;",8868},
      {"shcy;",1096},
      {"nvrtrie;",8885},
      {"SucceedsTilde;",8831},
      {"sdotb;",8865},
      {"softcy;",1100},
      {"Amacr;",256},
      {"Subset;",8912},
      {"Vopf;",55349},
      {"rotimes;",10805},
      {"rbrksld;",10638},
      {"succeq;",10928},
      {"suplarr;",10619},
      {"Poincareplane;",8460},
      {"dash;",8208},
      {"iacute",237},
      {"iacute;",237},
      {"dashv;",8867},
      {"bbrktbrk;",9142},
      {"subne;",8842},
      {"cirmid;",10991},
      {"propto;",8733},
      {"nlE;",8806},
      {"curvearrowright;",8631},
      {"Yacute",221},
      {"Yacute;",221},
      {"ntriangleleft;",8938},
      {"sqsup;",8848},
      {"SucceedsEqual;",10928},
      {"Lacute;",313},
      {"yopf;",55349},
      {"gtlPar;",10645},
      {"shy",173},
      {"kappa;",954},
      {"rscr;",55349},
      {"shy;",173},
      {"leftrightarrow;",8596},
      {"leftrightarrows;",8646},
      {"aelig",230},
      {"aelig;",230},
      {"rbrace;",125},
      {"gtrsim;",8819},
      {"dollar;",36},
      {"ratio;",8758},
      {"pre;",10927},
      {"ReverseUpEquilibrium;",10607},
      {"notinvb;",8951},
      {"IEcy;",1045},
      {"subnE;",10955},
      {"Tstrok;",358},
      {"micro",181},
      {"micro;",181},
      {"ntriangleright;",8939},
      {"ntrianglerighteq;",8941},
      {"scnap;",10938},
      {"rarr;",8594},
      {"midast;",42},
      {"mlcp;",10971},
      {"hslash;",8463},
      {"NotLeftTriangle;",8938},
      {"NotLeftTriangleBar;",10703},
      {"NotLeftTriangleEqual;",8940},
      {"llhard;",10603},
      {"LeftVectorBar;",10578},
      {"rarrtl;",8611},
      {"Ograve",210},
      {"Ograve;",210},
      {"leftrightharpoons;",8651},
      {"pfr;",55349},
      {"circledast;",8859},
      {"nvDash;",8877},
      {"mopf;",55349},
      {"MediumSpace;",8287},
      {"otimes;",8855},
      {"nisd;",8954},
      {"subplus;",10943},
      {"leftarrowtail;",8610},
      {"rbbrk;",10099},
      {"Kopf;",55349},
      {"rcaron;",345},
      {"EqualTilde;",8770},
      {"because;",8757},
      {"ntrianglelefteq;",8940},
      {"urcrop;",8974},
      {"sfrown;",8994},
      {"gtreqqless;",10892},
      {"NotPrecedesSlantEqual;",8928},
      {"supedot;",10948},
      {"rarrpl;",10565},
      {"urcorn;",8989},
      {"yicy;",1111},
      {"odot;",8857},
      {"tint;",8749},
      {"prec;",8826},
      {"udarr;",8645},
      {"nsccue;",8929},
      {"larrsim;",10611},
      {"rarrlp;",8620},
      {"curlyeqprec;",8926},
      {"Sacute;",346},
      {"prurel;",8880},
      {"uscr;",55349},
      {"NoBreak;",8288},
      {"nltri;",8938},
      {"sqsupset;",8848},
      {"otimesas;",10806},
      {"sqsupseteq;",8850},
      {"phone;",9742},
      {"robrk;",10215},
      {"oast;",8859},
      {"prnap;",10937},
      {"Iacute",205},
      {"Iacute;",205},
      {"Leftrightarrow;",8660},
      {"bigcup;",8899},
      {"gesdotol;",10884},
      {"Dashv;",10980},
      {"zigrarr;",8669},
      {"nvle;",8804},
      {"trade;",8482},
      {"nacute;",324},
      {"angrtvbd;",10653},
      {"backepsilon;",1014},
      {"DoubleLeftTee;",10980},
      {"uarr;",8593},
      {"oscr;",8500},
      {"curlyeqsucc;",8927},
      {"rarrc;",10547},
      {"NotLessGreater;",8824},
      {"circleddash;",8861},
      {"Zacute;",377},
      {"delta;",948},
      {"LeftUpTeeVector;",10592},
      {"sqsub;",8847},
      {"LeftUpVectorBar;",10584},
      {"LowerLeftArrow;",8601},
      {"succneqq;",10934},
      {"UnionPlus;",8846},
      {"rect;",9645},
      {"DoubleDot;",168},
      {"imped;",437},
      {"harrcir;",10568},
      {"puncsp;",8200},
      {"Bopf;",55349},
      {"ddagger;",8225},
      {"LJcy;",1033},
      {"Copf;",8450},
      {"fjlig;",102},
      {"hksearow;",10533},
      {"NotCupCap;",8813},
      {"Racute;",340},
      {"perp;",8869},
      {"rsquo;",8217},
      {"rsquor;",8217},
      {"LeftRightArrow;",8596},
      {"Eacute",201},
      {"Eacute;",201},
      {"order;",8500},
      {"sube;",8838},
      {"mapsto;",8614},
      {"urcorner;",8989},
      {"kcy;",1082},
      {"eplus;",10865},
      {"sim;",8764},
      {"bepsi;",1014},
      {"topcir;",10993},
      {"longleftrightarrow;",10231},
      {"angzarr;",9084},
      {"dbkarow;",10511},
      {"rceil;",8969},
      {"nVDash;",8879},
      {"starf;",9733},
      {"uwangle;",10663},
      {"boxHD;",9574},
      {"preceq;",10927},
      {"siml;",10909},
      {"ofcir;",10687},
      {"PrecedesSlantEqual;",8828},
      {"ClockwiseContourIntegral;",8754},
      {"DDotrahd;",10513},
      {"napE;",10864},
      {"ijlig;",307},
      {"nshortmid;",8740},
      {"circledcirc;",8858},
      {"boxhU;",9576},
      {"DJcy;",1026},
      {"DoubleDownArrow;",8659},
      {"varepsilon;",1013},
      {"vartriangleright;",8883},
      {"rarrb;",8677},
      {"slarr;",8592},
      {"equivDD;",10872},
      {"uhblk;",9600},
      {"ubreve;",365},
      {"odsold;",10684},
      {"Nacute;",323},
      {"shortmid;",8739},
      {"glj;",10916},
      {"GreaterGreater;",10914},
      {"TRADE;",8482},
      {"sqsupe;",8850},
      {"ugrave",249},
      {"ugrave;",249},
      {"thkap;",8776},
      {"nles;",10877},
      {"Otilde",213},
      {"Otilde;",213},
      {"period;",46},
      {"upuparrows;",8648},
      {"Aacute",193},
      {"Aacute;",193},
      {"sqsubset;",8847},
      {"sung;",9834},
      {"sqsubseteq;",8849},
      {"leftrightsquigarrow;",8621},
      {"scirc;",349},
      {"curlywedge;",8911},
      {"lmoust;",9136},
      {"mapstoup;",8613},
      {"psi;",968},
      {"Colon;",8759},
      {"LessEqualGreater;",8922},
      {"ograve",242},
      {"ograve;",242},
      {"NotGreaterTilde;",8821},
      {"bowtie;",8904},
      {"radic;",8730},
      {"Delta;",916},
      {"lAtail;",10523},
      {"uring;",367},
      {"spades;",9824},
      {"simne;",8774},
      {"Longleftrightarrow;",10234},
      {"ffilig;",64259},
      {"thickapprox;",8776},
      {"tcy;",1090},
      {"LeftTriangleBar;",10703},
      {"supdot;",10942},
      {"phi;",966},
      {"NotSuperset;",8835},
      {"prime;",8242},
      {"NegativeThinSpace;",8203},
      {"minus;",8722},
      {"succapprox;",10936},
      {"bigsqcup;",10758},
      {"percnt;",37},
      {"simlE;",10911},
      {"exist;",8707},
      {"CenterDot;",183},
      {"TSHcy;",1035},
      {"nless;",8814},
      {"primes;",8473},
      {"realpart;",8476},
      {"Cayleys;",8493},
      {"pound",163},
      {"pound;",163},
      {"GJcy;",1027},
      {"ohbar;",10677},
      {"ell;",8467},
      {"nltrie;",8940},
      {"Ocirc",212},
      {"Ocirc;",212},
      {"LessLess;",10913},
      {"aleph;",8501},
      {"ovbar;",9021},
      {"Proportional;",8733},
      {"circlearrowleft;",8634},
      {"zacute;",378},
      {"rcub;",125},
      {"ReverseElement;",8715},
      {"barwed;",8965},
      {"NegativeVeryThinSpace;",8203},
      {"simplus;",10788},
      {"precneqq;",10933},
      {"cirE;",10691},
      {"nparallel;",8742},
      {"rlm;",8207},
      {"Cconint;",8752},
      {"notniva;",8716},
      {"kopf;",55349},
      {"sqsube;",8849},
      {"LeftTeeArrow;",8612},
      {"NJcy;",1034},
      {"between;",8812},
      {"pscr;",55349},
      {"DoubleRightTee;",8872},
      {"UpArrow;",8593},
      {"TripleDot;",8411},
      {"rarrbfs;",10528},
      {"rsh;",8625},
      {"nlArr;",8653},
      {"rtrif;",9656},
      {"minusd;",8760},
      {"NotElement;",8713},
      {"rlarr;",8644},
      {"par;",8741},
      {"part;",8706},
      {"sqcup;",8852},
      {"mapstodown;",8615},
      {"yacute",253},
      {"yacute;",253},
      {"nLeftarrow;",8653},
      {"times",215},
      {"times;",215},
      {"tridot;",9708},
      {"VeryThinSpace;",8202},
      {"ApplyFunction;",8289},
      {"utilde;",361},
      {"swarrow;",8601},
      {"sqcups;",8852},
      {"supmult;",10946},
      {"scy;",1089},
      {"doublebarwedge;",8966},
      {"lcedil;",316},
      {"NotTildeTilde;",8777},
      {"ccedil",231},
      {"ccedil;",231},
      {"subrarr;",10617},
      {"rx;",8478},
      {"Equilibrium;",8652},
      {"vDash;",8872},
      {"supset;",8835},
      {"xlArr;",10232},
      {"otilde",245},
      {"otilde;",245},
      {"rarrap;",10613},
      {"NestedGreaterGreater;",8811},
      {"ocir;",8858},
      {"NotTildeEqual;",8772},
      {"nsqsupe;",8931},
      {"downdownarrows;",8650},
      {"LowerRightArrow;",8600},
      {"rdca;",10551},
      {"triminus;",10810},
      {"dzigrarr;",10239},
      {"sime;",8771},
      {"simeq;",8771},
      {"LessSlantEqual;",10877},
      {"varnothing;",8709},
      {"urtri;",9721},
      {"nLeftrightarrow;",8654},
      {"utrif;",9652},
      {"topf;",55349},
      {"leftharpoonup;",8636},
      {"image;",8465},
      {"para",182},
      {"para;",182},
      {"Colone;",10868},
      {"olt;",10688},
      {"phmmat;",8499},
      {"succnapprox;",10938},
      {"leftthreetimes;",8907},
      {"bigtriangleup;",9651},
      {"DownLeftVector;",8637},
      {"DownLeftVectorBar;",10582},
      {"setminus;",8726},
      {"longrightarrow;",10230},
      {"swArr;",8665},
      {"timesd;",10800},
      {"boxhu;",9524},
      {"Ocy;",1054},
      {"phiv;",981},
      {"backsim;",8765},
      {"olarr;",8634},
      {"HumpDownHump;",8782},
      {"SucceedsSlantEqual;",8829},
      {"updownarrow;",8597},
      {"ucirc",251},
      {"ucirc;",251},
      {"oint;",8750},
      {"orderof;",8500},
      {"rharu;",8640},
      {"precapprox;",10935},
      {"malt;",10016},
      {"rharul;",10604},
      {"Lcedil;",315},
      {"bigotimes;",10754},
      {"rdquo;",8221},
      {"rdquor;",8221},
      {"LongLeftArrow;",10229},
      {"roplus;",10798},
      {"subedot;",10947},
      {"bigcirc;",9711},
      {"ntlg;",8824},
      {"ocirc",244},
      {"ocirc;",244},
      {"supseteq;",8839},
      {"supseteqq;",10950},
      {"hellip;",8230},
      {"nvlArr;",10498},
      {"rtriltri;",10702},
      {"raquo",187},
      {"raquo;",187},
      {"Cacute;",262},
      {"gEl;",10892},
      {"jukcy;",1108},
      {"vellip;",8942},
      {"scE;",10932},
      {"minusdu;",10794},
      {"daleth;",8504},
      {"DotEqual;",8784},
      {"rsaquo;",8250},
      {"DoubleLongRightArrow;",10233},
      {"DownBreve;",785},
      {"tstrok;",359},
      {"tritime;",10811},
      {"backsimeq;",8909},
      {"searrow;",8600},
      {"odiv;",10808},
      {"trisb;",10701},
      {"Exists;",8707},
      {"LeftDoubleBracket;",10214},
      {"rarrw;",8605},
      {"barwedge;",8965},
      {"rcy;",1088},
      {"Longrightarrow;",10233},
      {"sopf;",55349},
      {"Scedil;",350},
      {"LeftUpDownVector;",10577},
      {"KJcy;",1036},
      {"NotPrecedesEqual;",10927},
      {"vartheta;",977},
      {"SuchThat;",8715},
      {"bnequiv;",8801},
      {"iukcy;",1110},
      {"squf;",9642},
      {"ncedil;",326},
      {"prE;",10931},
      {"DownArrowUpArrow;",8693},
      {"sigma;",963},
      {"filig;",64257},
      {"LongRightArrow;",10230},
      {"midcir;",10992},
      {"rthree;",8908},
      {"target;",8982},
      {"luruhar;",10598},
      {"fllig;",64258},
      {"middot",183},
      {"middot;",183},
      {"lesssim;",8818},
      {"bigstar;",9733},
      {"smt;",10922},
      {"supsetneq;",8843},
      {"supsetneqq;",10956},
      {"seArr;",8664},
      {"Because;",8757},
      {"Product;",8719},
      {"Mellintrf;",8499},
      {"uparrow;",8593},
      {"NotSubset;",8834},
      {"thetav;",977},
      {"rBarr;",10511},
      {"LeftRightVector;",10574},
      {"Rcedil;",342},
      {"ucy;",1091},
      {"supE;",10950},
      {"DoubleVerticalBar;",8741},
      {"SquareIntersection;",8851},
      {"race;",8765},
      {"rAarr;",8667},
      {"lmidot;",320},
      {"rArr;",8658},
      {"Gcedil;",290},
      {"sol;",47},
      {"Oopf;",55349},
      {"DoubleLeftRightArrow;",8660},
      {"RightArrow;",8594},
      {"minusb;",8863},
      {"precnapprox;",10937},
      {"ocy;",1086},
      {"jmath;",567},
      {"sigmaf;",962},
      {"pi;",960},
      {"varsupsetneq;",8843},
      {"alefsym;",8501},
      {"prod;",8719},
      {"simrarr;",10610},
      {"piv;",982},
      {"Jukcy;",1028},
      {"NotLessEqual;",8816},
      {"NotTildeFullEqual;",8775},
      {"NotEqual;",8800},
      {"lmoustache;",9136},
      {"Ncedil;",325},
      {"intlarhk;",10775},
      {"SOFTcy;",1068},
      {"subdot;",10941},
      {"backprime;",8245},
      {"alpha;",945},
      {"ExponentialE;",8519},
      {"vdash;",8866},
      {"realine;",8475},
      {"lfisht;",10620},
      {"notnivc;",8957},
      {"GreaterFullEqual;",8807},
      {"Iukcy;",1030},
      {"DownLeftRightVector;",10576},
      {"imof;",8887},
      {"leftharpoondown;",8637},
      {"dfisht;",10623},
      {"NewLine;",10},
      {"uArr;",8657},
      {"imath;",305},
      {"ZeroWidthSpace;",8203},
      {"bigtriangledown;",9661},
      {"ropf;",55349},
      {"Lmidot;",319},
      {"maltese;",10016},
      {"SubsetEqual;",8838},
      {"upharpoonleft;",8639},
      {"NotDoubleVerticalBar;",8742},
      {"male;",9794},
      {"varsupsetneqq;",10956},
      {"timesb;",8864},
      {"upsih;",978},
      {"nmid;",8740},
      {"GreaterEqual;",8805},
      {"Omacr;",332},
      {"notnivb;",8958},
      {"timesbar;",10801},
      {"rationals;",8474},
      {"origof;",8886},
      {"NegativeThickSpace;",8203},
      {"raemptyv;",10675},
      {"rang;",10217},
      {"VerticalBar;",8739},
      {"upharpoonright;",8638},
      {"rarrfs;",10526},
      {"rppolint;",10770},
      {"Tcedil;",354},
      {"boxhD;",9573},
      {"nsqsube;",8930},
      {"ulcrop;",8975},
      {"vartriangleleft;",8882},
      {"oline;",8254},
      {"VDash;",8875},
      {"ulcorn;",8988},
      {"supdsub;",10968},
      {"uopf;",55349},
      {"kappav;",1008},
      {"submult;",10945},
      {"RightArrowLeftArrow;",8644},
      {"nequiv;",8802},
      {"curlyvee;",8910},
      {"sccue;",8829},
      {"subset;",8834},
      {"olcir;",10686},
      {"Implies;",8658},
      {"LeftDownVector;",8643},
      {"LeftDownVectorBar;",10585},
      {"blacktriangleright;",9656},
      {"ratail;",10522},
      {"succcurlyeq;",8829},
      {"oopf;",55349},
      {"LeftCeiling;",8968},
      {"range;",10661},
      {"rfloor;",8971},
      {"VerticalLine;",124},
      {"solb;",10692},
      {"ndash;",8211},
      {"nrightarrow;",8603},
      {"nwarhk;",10531},
      {"NotVerticalBar;",8740},
      {"Lleftarrow;",8666},
      {"telrec;",8981},
      {"udhar;",10606},
      {"permil;",8240},
      {"Odblac;",336},
      {"Barwed;",8966},
      {"smallsetminus;",8726},
      {"smte;",10924},
      {"NotSucceeds;",8833},
      {"empty;",8709},
      {"HilbertSpace;",8459},
      {"imagpart;",8465},
      {"prcue;",8828},
      {"ulcorner;",8988},
      {"pcy;",1087},
      {"DownTeeArrow;",8615},
      {"simg;",10910},
      {"Rrightarrow;",8667},
      {"multimap;",8888},
      {"ReverseEquilibrium;",8651},
      {"bigwedge;",8896},
      {"Kcedil;",310},
      {"nvinfin;",10718},
      {"blacktriangle;",9652},
      {"subseteq;",8838},
      {"subseteqq;",10949},
      {"olcross;",10683},
      {"GreaterEqualLess;",8923},
      {"umacr;",363},
      {"sacute;",347},
      {"ordf",170},
      {"ordf;",170},
      {"DoubleRightArrow;",8658},
      {"smile;",8995},
      {"smtes;",10924},
      {"omacr;",333},
      {"simdot;",10858},
      {"CirclePlus;",8853},
      {"rbrack;",93},
      {"nleftarrow;",8602},
      {"CircleTimes;",8855},
      {"UpDownArrow;",8597},
      {"rangd;",10642},
      {"emptyset;",8709},
      {"Ccedil",199},
      {"Ccedil;",199},
      {"simgE;",10912},
      {"Alpha;",913},
      {"Oacute",211},
      {"Oacute;",211},
      {"nearhk;",10532},
      {"DownRightTeeVector;",10591},
      {"pertenk;",8241},
      {"varsubsetneq;",8842},
      {"nleftrightarrow;",8622},
      {"varphi;",981},
      {"preccurlyeq;",8828},
      {"rangle;",10217},
      {"subsetneq;",8842},
      {"subsetneqq;",10955},
      {"udblac;",369},
      {"RightTee;",8866},
      {"HorizontalLine;",9472},
      {"supsim;",10952},
      {"RightTeeVector;",10587},
      {"spadesuit;",9824},
      {"half;",189},
      {"scpolint;",10771},
      {"subE;",10949},
      {"iinfin;",10716},
      {"odblac;",337},
      {"downharpoonright;",8642},
      {"popf;",55349},
      {"supsup;",10966},
      {"OverBrace;",9182},
      {"ubrcy;",1118},
      {"larrhk;",8617},
      {"Rightarrow;",8658},
      {"scnE;",10934},
      {"DownLeftTeeVector;",10590},
      {"CircleDot;",8857},
      {"Vdash;",8873},
      {"pm;",177},
      {"nRightarrow;",8655},
      {"ring;",730},
      {"racute;",341},
      {"Vdashl;",10982},
      {"nvltrie;",8884},
      {"RightUpVector;",8638},
      {"AElig",198},
      {"AElig;",198},
      {"varsubsetneqq;",10955},
      {"twixt;",8812},
      {"succsim;",8831},
      {"Oslash",216},
      {"Oslash;",216},
      {"rdsh;",8627},
      {"SmallCircle;",8728},
      {"RightArrowBar;",8677},
      {"Bernoullis;",8492},
      {"VerticalTilde;",8768},
      {"NotEqualTilde;",8770},
      {"NotSupersetEqual;",8841},
      {"prnE;",10933},
      {"rlhar;",8652},
      {"ffllig;",64260},
      {"swnwar;",10538},
      {"thicksim;",8764},
      {"twoheadrightarrow;",8608},
      {"ultri;",9720},
      {"OverBracket;",9140},
      {"ldrdhar;",10599},
      {"mdash;",8212},
      {"hkswarow;",10534},
      {"DownRightVector;",8641},
      {"Omicron;",927},
      {"DownRightVectorBar;",10583},
      {"uacute",250},
      {"uacute;",250},
      {"RightTeeArrow;",8614},
      {"OverBar;",8254},
      {"naturals;",8469},
      {"kcedil;",311},
      {"RightUpTeeVector;",10588},
      {"blacktriangledown;",9662},
      {"NotExists;",8708},
      {"IJlig;",306},
      {"LessGreater;",8822},
      {"oacute",243},
      {"oacute;",243},
      {"profsurf;",8979},
      {"parsl;",11005},
      {"LeftAngleBracket;",10216},
      {"solbar;",9023},
      {"CircleMinus;",8854},
      {"CounterClockwiseContourIntegral;",8755},
      {"suphsub;",10967},
      {"cirscir;",10690},
      {"natural;",9838},
      {"DiacriticalDot;",729},
      {"ImaginaryI;",8520},
      {"UpArrowBar;",10514},
      {"NotSucceedsSlantEqual;",8929},
      {"seswar;",10537},
      {"OpenCurlyQuote;",8216},
      {"topfork;",10970},
      {"OverParenthesis;",9180},
      {"DiacriticalDoubleAcute;",733},
      {"rarrsim;",10612},
      {"tcedil;",355},
      {"risingdotseq;",8787},
      {"oelig;",339},
      {"MinusPlus;",8723},
      {"shchcy;",1097},
      {"parallel;",8741},
      {"RightAngleBracket;",10217},
      {"oslash",248},
      {"oslash;",248},
      {"precsim;",8830},
      {"nshortparallel;",8742},
      {"UpArrowDownArrow;",8645},
      {"succnsim;",8937},
      {"omicron;",959},
      {"cirfnint;",10768},
      {"NotSubsetEqual;",8840},
      {"szlig",223},
      {"szlig;",223},
      {"sigmav;",962},
      {"profalar;",9006},
      {"pointint;",10773},
      {"scedil;",351},
      {"LongLeftRightArrow;",10231},
      {"rmoust;",9137},
      {"tshcy;",1115},
      {"uplus;",8846},
      {"rAtail;",10524},
      {"supsub;",10964},
      {"fallingdotseq;",8786},
      {"CapitalDifferentialD;",8517},
      {"oplus;",8853},
      {"LeftDownTeeVector;",10593},
      {"subsim;",10951},
      {"Tilde;",8764},
      {"VerticalSeparator;",10072},
      {"mapstoleft;",8612},
      {"RightUpDownVector;",10575},
      {"subsup;",10963},
      {"scnsim;",8937},
      {"plankv;",8463},
      {"thetasym;",977},
      {"DifferentialD;",8518},
      {"NotHumpDownHump;",8782},
      {"varsigma;",962},
      {"plus;",43},
      {"plusmn",177},
      {"plusmn;",177},
      {"precnsim;",8936},
      {"blacktriangleleft;",9666},
      {"prnsim;",8936},
      {"rcedil;",343},
      {"smid;",8739},
      {"RightDownTeeVector;",10589},
      {"pluse;",10866},
      {"plustwo;",10791},
      {"rightsquigarrow;",8605},
      {"PartialD;",8706},
      {"CloseCurlyQuote;",8217},
      {"downharpoonleft;",8643},
      {"thksim;",8764},
      {"emptyv;",8709},
      {"swarhk;",10534},
      {"NonBreakingSpace;",160},
      {"CloseCurlyDoubleQuote;",8221},
      {"plusb;",8862},
      {"imagline;",8464},
      {"NotRightTriangle;",8939},
      {"NotRightTriangleBar;",10704},
      {"NotRightTriangleEqual;",8941},
      {"triangle;",9653},
      {"triangleq;",8796},
      {"triangleleft;",9667},
      {"triangledown;",9663},
      {"rightleftarrows;",8644},
      {"RightVector;",8640},
      {"trianglelefteq;",8884},
      {"RightDownVector;",8642},
      {"RightDownVectorBar;",10581},
      {"plusdu;",10789},
      {"NotSucceedsEqual;",10928},
      {"plusdo;",8724},
      {"NotReverseElement;",8716},
      {"NotSucceedsTilde;",8831},
      {"rightleftharpoons;",8652},
      {"smeparsl;",10724},
      {"OpenCurlyDoubleQuote;",8220},
      {"straightphi;",981},
      {"searhk;",10533},
      {"rightharpoonup;",8640},
      {"omid;",10678},
      {"Omega;",937},
      {"subsub;",10965},
      {"NotHumpEqual;",8783},
      {"rmoustache;",9137},
      {"pitchfork;",8916},
      {"triangleright;",9657},
      {"rfisht;",10621},
      {"rightharpoondown;",8641},
      {"OElig;",338},
      {"LessFullEqual;",8806},
      {"RightFloor;",8971},
      {"parsim;",10995},
      {"odash;",8861},
      {"planck;",8463},
      {"trianglerighteq;",8885},
      {"ufisht;",10622},
      {"suphsol;",10185},
      {"measuredangle;",8737},
      {"tilde;",732},
      {"ominus;",8854},
      {"uml",168},
      {"uml;",168},
      {"EmptySmallSquare;",9723},
      {"RightUpVectorBar;",10580},
      {"FilledSmallSquare;",9724},
      {"rightarrow;",8594},
      {"omega;",969},
      {"vzigzag;",10650},
      {"rightrightarrows;",8649},
      {"InvisibleTimes;",8290},
      {"NegativeMediumSpace;",8203},
      {"PlusMinus;",177},
      {"DiacriticalTilde;",732},
      {"DiacriticalAcute;",180},
      {"LessTilde;",8818},
      {"rarrhk;",8618},
      {"twoheadleftarrow;",8606},
      {"profline;",8978},
      {"plusacir;",10787},
      {"RightTriangle;",8883},
      {"smashp;",10803},
      {"InvisibleComma;",8291},
      {"straightepsilon;",1013},
      {"RightCeiling;",8969},
      {"TildeEqual;",8771},
      {"RightVectorBar;",10579},
      {"TildeTilde;",8776},
      {"RightDoubleBracket;",10215},
      {"DiacriticalGrave;",96},
      {"FilledVerySmallSquare;",9642},
      {"planckh;",8462},
      {"plussim;",10790},
      {"pluscir;",10786},
      {"EmptyVerySmallSquare;",9643},
      {"ruluhar;",10600},
      {"UpEquilibrium;",10606},
      {"RuleDelayed;",10740},
      {"TildeFullEqual;",8773},
      {"rightarrowtail;",8611},
      {"RightTriangleEqual;",8885},
      {"rightthreetimes;",8908},
      {"RightTriangleBar;",10704},
      {"trpezium;",9186},
      {"rdldhar;",10601}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct entity *resword;

          switch (key - 2)
            {
              case 0:
                resword = &wordlist[0];
                goto compare;
              case 1:
                resword = &wordlist[1];
                goto compare;
              case 5:
                resword = &wordlist[2];
                goto compare;
              case 6:
                resword = &wordlist[3];
                goto compare;
              case 36:
                resword = &wordlist[4];
                goto compare;
              case 42:
                resword = &wordlist[5];
                goto compare;
              case 47:
                resword = &wordlist[6];
                goto compare;
              case 48:
                resword = &wordlist[7];
                goto compare;
              case 54:
                resword = &wordlist[8];
                goto compare;
              case 59:
                resword = &wordlist[9];
                goto compare;
              case 64:
                resword = &wordlist[10];
                goto compare;
              case 68:
                resword = &wordlist[11];
                goto compare;
              case 78:
                resword = &wordlist[12];
                goto compare;
              case 83:
                resword = &wordlist[13];
                goto compare;
              case 88:
                resword = &wordlist[14];
                goto compare;
              case 99:
                resword = &wordlist[15];
                goto compare;
              case 108:
                resword = &wordlist[16];
                goto compare;
              case 113:
                resword = &wordlist[17];
                goto compare;
              case 121:
                resword = &wordlist[18];
                goto compare;
              case 126:
                resword = &wordlist[19];
                goto compare;
              case 127:
                resword = &wordlist[20];
                goto compare;
              case 128:
                resword = &wordlist[21];
                goto compare;
              case 129:
                resword = &wordlist[22];
                goto compare;
              case 134:
                resword = &wordlist[23];
                goto compare;
              case 137:
                resword = &wordlist[24];
                goto compare;
              case 138:
                resword = &wordlist[25];
                goto compare;
              case 139:
                resword = &wordlist[26];
                goto compare;
              case 143:
                resword = &wordlist[27];
                goto compare;
              case 147:
                resword = &wordlist[28];
                goto compare;
              case 148:
                resword = &wordlist[29];
                goto compare;
              case 149:
                resword = &wordlist[30];
                goto compare;
              case 157:
                resword = &wordlist[31];
                goto compare;
              case 158:
                resword = &wordlist[32];
                goto compare;
              case 168:
                resword = &wordlist[33];
                goto compare;
              case 173:
                resword = &wordlist[34];
                goto compare;
              case 179:
                resword = &wordlist[35];
                goto compare;
              case 182:
                resword = &wordlist[36];
                goto compare;
              case 188:
                resword = &wordlist[37];
                goto compare;
              case 218:
                resword = &wordlist[38];
                goto compare;
              case 219:
                resword = &wordlist[39];
                goto compare;
              case 221:
                resword = &wordlist[40];
                goto compare;
              case 227:
                resword = &wordlist[41];
                goto compare;
              case 237:
                resword = &wordlist[42];
                goto compare;
              case 238:
                resword = &wordlist[43];
                goto compare;
              case 241:
                resword = &wordlist[44];
                goto compare;
              case 257:
                resword = &wordlist[45];
                goto compare;
              case 263:
                resword = &wordlist[46];
                goto compare;
              case 264:
                resword = &wordlist[47];
                goto compare;
              case 271:
                resword = &wordlist[48];
                goto compare;
              case 277:
                resword = &wordlist[49];
                goto compare;
              case 278:
                resword = &wordlist[50];
                goto compare;
              case 282:
                resword = &wordlist[51];
                goto compare;
              case 284:
                resword = &wordlist[52];
                goto compare;
              case 291:
                resword = &wordlist[53];
                goto compare;
              case 292:
                resword = &wordlist[54];
                goto compare;
              case 293:
                resword = &wordlist[55];
                goto compare;
              case 302:
                resword = &wordlist[56];
                goto compare;
              case 309:
                resword = &wordlist[57];
                goto compare;
              case 313:
                resword = &wordlist[58];
                goto compare;
              case 314:
                resword = &wordlist[59];
                goto compare;
              case 319:
                resword = &wordlist[60];
                goto compare;
              case 325:
                resword = &wordlist[61];
                goto compare;
              case 334:
                resword = &wordlist[62];
                goto compare;
              case 335:
                resword = &wordlist[63];
                goto compare;
              case 339:
                resword = &wordlist[64];
                goto compare;
              case 344:
                resword = &wordlist[65];
                goto compare;
              case 347:
                resword = &wordlist[66];
                goto compare;
              case 348:
                resword = &wordlist[67];
                goto compare;
              case 349:
                resword = &wordlist[68];
                goto compare;
              case 350:
                resword = &wordlist[69];
                goto compare;
              case 352:
                resword = &wordlist[70];
                goto compare;
              case 354:
                resword = &wordlist[71];
                goto compare;
              case 355:
                resword = &wordlist[72];
                goto compare;
              case 357:
                resword = &wordlist[73];
                goto compare;
              case 360:
                resword = &wordlist[74];
                goto compare;
              case 362:
                resword = &wordlist[75];
                goto compare;
              case 363:
                resword = &wordlist[76];
                goto compare;
              case 364:
                resword = &wordlist[77];
                goto compare;
              case 365:
                resword = &wordlist[78];
                goto compare;
              case 367:
                resword = &wordlist[79];
                goto compare;
              case 369:
                resword = &wordlist[80];
                goto compare;
              case 370:
                resword = &wordlist[81];
                goto compare;
              case 372:
                resword = &wordlist[82];
                goto compare;
              case 375:
                resword = &wordlist[83];
                goto compare;
              case 377:
                resword = &wordlist[84];
                goto compare;
              case 378:
                resword = &wordlist[85];
                goto compare;
              case 382:
                resword = &wordlist[86];
                goto compare;
              case 383:
                resword = &wordlist[87];
                goto compare;
              case 385:
                resword = &wordlist[88];
                goto compare;
              case 387:
                resword = &wordlist[89];
                goto compare;
              case 393:
                resword = &wordlist[90];
                goto compare;
              case 395:
                resword = &wordlist[91];
                goto compare;
              case 397:
                resword = &wordlist[92];
                goto compare;
              case 398:
                resword = &wordlist[93];
                goto compare;
              case 399:
                resword = &wordlist[94];
                goto compare;
              case 404:
                resword = &wordlist[95];
                goto compare;
              case 405:
                resword = &wordlist[96];
                goto compare;
              case 406:
                resword = &wordlist[97];
                goto compare;
              case 407:
                resword = &wordlist[98];
                goto compare;
              case 409:
                resword = &wordlist[99];
                goto compare;
              case 410:
                resword = &wordlist[100];
                goto compare;
              case 412:
                resword = &wordlist[101];
                goto compare;
              case 415:
                resword = &wordlist[102];
                goto compare;
              case 419:
                resword = &wordlist[103];
                goto compare;
              case 422:
                resword = &wordlist[104];
                goto compare;
              case 425:
                resword = &wordlist[105];
                goto compare;
              case 428:
                resword = &wordlist[106];
                goto compare;
              case 434:
                resword = &wordlist[107];
                goto compare;
              case 440:
                resword = &wordlist[108];
                goto compare;
              case 444:
                resword = &wordlist[109];
                goto compare;
              case 445:
                resword = &wordlist[110];
                goto compare;
              case 447:
                resword = &wordlist[111];
                goto compare;
              case 450:
                resword = &wordlist[112];
                goto compare;
              case 455:
                resword = &wordlist[113];
                goto compare;
              case 457:
                resword = &wordlist[114];
                goto compare;
              case 467:
                resword = &wordlist[115];
                goto compare;
              case 469:
                resword = &wordlist[116];
                goto compare;
              case 474:
                resword = &wordlist[117];
                goto compare;
              case 477:
                resword = &wordlist[118];
                goto compare;
              case 480:
                resword = &wordlist[119];
                goto compare;
              case 493:
                resword = &wordlist[120];
                goto compare;
              case 494:
                resword = &wordlist[121];
                goto compare;
              case 498:
                resword = &wordlist[122];
                goto compare;
              case 499:
                resword = &wordlist[123];
                goto compare;
              case 500:
                resword = &wordlist[124];
                goto compare;
              case 501:
                resword = &wordlist[125];
                goto compare;
              case 502:
                resword = &wordlist[126];
                goto compare;
              case 506:
                resword = &wordlist[127];
                goto compare;
              case 507:
                resword = &wordlist[128];
                goto compare;
              case 509:
                resword = &wordlist[129];
                goto compare;
              case 510:
                resword = &wordlist[130];
                goto compare;
              case 511:
                resword = &wordlist[131];
                goto compare;
              case 512:
                resword = &wordlist[132];
                goto compare;
              case 515:
                resword = &wordlist[133];
                goto compare;
              case 517:
                resword = &wordlist[134];
                goto compare;
              case 522:
                resword = &wordlist[135];
                goto compare;
              case 529:
                resword = &wordlist[136];
                goto compare;
              case 532:
                resword = &wordlist[137];
                goto compare;
              case 533:
                resword = &wordlist[138];
                goto compare;
              case 534:
                resword = &wordlist[139];
                goto compare;
              case 539:
                resword = &wordlist[140];
                goto compare;
              case 544:
                resword = &wordlist[141];
                goto compare;
              case 547:
                resword = &wordlist[142];
                goto compare;
              case 553:
                resword = &wordlist[143];
                goto compare;
              case 562:
                resword = &wordlist[144];
                goto compare;
              case 567:
                resword = &wordlist[145];
                goto compare;
              case 570:
                resword = &wordlist[146];
                goto compare;
              case 577:
                resword = &wordlist[147];
                goto compare;
              case 579:
                resword = &wordlist[148];
                goto compare;
              case 584:
                resword = &wordlist[149];
                goto compare;
              case 599:
                resword = &wordlist[150];
                goto compare;
              case 600:
                resword = &wordlist[151];
                goto compare;
              case 603:
                resword = &wordlist[152];
                goto compare;
              case 607:
                resword = &wordlist[153];
                goto compare;
              case 609:
                resword = &wordlist[154];
                goto compare;
              case 627:
                resword = &wordlist[155];
                goto compare;
              case 629:
                resword = &wordlist[156];
                goto compare;
              case 637:
                resword = &wordlist[157];
                goto compare;
              case 639:
                resword = &wordlist[158];
                goto compare;
              case 646:
                resword = &wordlist[159];
                goto compare;
              case 647:
                resword = &wordlist[160];
                goto compare;
              case 651:
                resword = &wordlist[161];
                goto compare;
              case 656:
                resword = &wordlist[162];
                goto compare;
              case 657:
                resword = &wordlist[163];
                goto compare;
              case 661:
                resword = &wordlist[164];
                goto compare;
              case 662:
                resword = &wordlist[165];
                goto compare;
              case 666:
                resword = &wordlist[166];
                goto compare;
              case 667:
                resword = &wordlist[167];
                goto compare;
              case 668:
                resword = &wordlist[168];
                goto compare;
              case 669:
                resword = &wordlist[169];
                goto compare;
              case 671:
                resword = &wordlist[170];
                goto compare;
              case 672:
                resword = &wordlist[171];
                goto compare;
              case 673:
                resword = &wordlist[172];
                goto compare;
              case 677:
                resword = &wordlist[173];
                goto compare;
              case 681:
                resword = &wordlist[174];
                goto compare;
              case 683:
                resword = &wordlist[175];
                goto compare;
              case 689:
                resword = &wordlist[176];
                goto compare;
              case 691:
                resword = &wordlist[177];
                goto compare;
              case 692:
                resword = &wordlist[178];
                goto compare;
              case 695:
                resword = &wordlist[179];
                goto compare;
              case 697:
                resword = &wordlist[180];
                goto compare;
              case 698:
                resword = &wordlist[181];
                goto compare;
              case 702:
                resword = &wordlist[182];
                goto compare;
              case 703:
                resword = &wordlist[183];
                goto compare;
              case 704:
                resword = &wordlist[184];
                goto compare;
              case 707:
                resword = &wordlist[185];
                goto compare;
              case 709:
                resword = &wordlist[186];
                goto compare;
              case 713:
                resword = &wordlist[187];
                goto compare;
              case 715:
                resword = &wordlist[188];
                goto compare;
              case 717:
                resword = &wordlist[189];
                goto compare;
              case 718:
                resword = &wordlist[190];
                goto compare;
              case 728:
                resword = &wordlist[191];
                goto compare;
              case 732:
                resword = &wordlist[192];
                goto compare;
              case 733:
                resword = &wordlist[193];
                goto compare;
              case 734:
                resword = &wordlist[194];
                goto compare;
              case 735:
                resword = &wordlist[195];
                goto compare;
              case 738:
                resword = &wordlist[196];
                goto compare;
              case 740:
                resword = &wordlist[197];
                goto compare;
              case 741:
                resword = &wordlist[198];
                goto compare;
              case 747:
                resword = &wordlist[199];
                goto compare;
              case 749:
                resword = &wordlist[200];
                goto compare;
              case 755:
                resword = &wordlist[201];
                goto compare;
              case 761:
                resword = &wordlist[202];
                goto compare;
              case 763:
                resword = &wordlist[203];
                goto compare;
              case 765:
                resword = &wordlist[204];
                goto compare;
              case 767:
                resword = &wordlist[205];
                goto compare;
              case 771:
                resword = &wordlist[206];
                goto compare;
              case 777:
                resword = &wordlist[207];
                goto compare;
              case 781:
                resword = &wordlist[208];
                goto compare;
              case 782:
                resword = &wordlist[209];
                goto compare;
              case 787:
                resword = &wordlist[210];
                goto compare;
              case 794:
                resword = &wordlist[211];
                goto compare;
              case 800:
                resword = &wordlist[212];
                goto compare;
              case 806:
                resword = &wordlist[213];
                goto compare;
              case 811:
                resword = &wordlist[214];
                goto compare;
              case 814:
                resword = &wordlist[215];
                goto compare;
              case 817:
                resword = &wordlist[216];
                goto compare;
              case 837:
                resword = &wordlist[217];
                goto compare;
              case 842:
                resword = &wordlist[218];
                goto compare;
              case 843:
                resword = &wordlist[219];
                goto compare;
              case 844:
                resword = &wordlist[220];
                goto compare;
              case 848:
                resword = &wordlist[221];
                goto compare;
              case 853:
                resword = &wordlist[222];
                goto compare;
              case 854:
                resword = &wordlist[223];
                goto compare;
              case 857:
                resword = &wordlist[224];
                goto compare;
              case 858:
                resword = &wordlist[225];
                goto compare;
              case 869:
                resword = &wordlist[226];
                goto compare;
              case 872:
                resword = &wordlist[227];
                goto compare;
              case 873:
                resword = &wordlist[228];
                goto compare;
              case 875:
                resword = &wordlist[229];
                goto compare;
              case 877:
                resword = &wordlist[230];
                goto compare;
              case 879:
                resword = &wordlist[231];
                goto compare;
              case 884:
                resword = &wordlist[232];
                goto compare;
              case 885:
                resword = &wordlist[233];
                goto compare;
              case 896:
                resword = &wordlist[234];
                goto compare;
              case 899:
                resword = &wordlist[235];
                goto compare;
              case 902:
                resword = &wordlist[236];
                goto compare;
              case 908:
                resword = &wordlist[237];
                goto compare;
              case 909:
                resword = &wordlist[238];
                goto compare;
              case 914:
                resword = &wordlist[239];
                goto compare;
              case 918:
                resword = &wordlist[240];
                goto compare;
              case 924:
                resword = &wordlist[241];
                goto compare;
              case 925:
                resword = &wordlist[242];
                goto compare;
              case 933:
                resword = &wordlist[243];
                goto compare;
              case 937:
                resword = &wordlist[244];
                goto compare;
              case 938:
                resword = &wordlist[245];
                goto compare;
              case 942:
                resword = &wordlist[246];
                goto compare;
              case 943:
                resword = &wordlist[247];
                goto compare;
              case 944:
                resword = &wordlist[248];
                goto compare;
              case 945:
                resword = &wordlist[249];
                goto compare;
              case 947:
                resword = &wordlist[250];
                goto compare;
              case 949:
                resword = &wordlist[251];
                goto compare;
              case 953:
                resword = &wordlist[252];
                goto compare;
              case 956:
                resword = &wordlist[253];
                goto compare;
              case 959:
                resword = &wordlist[254];
                goto compare;
              case 964:
                resword = &wordlist[255];
                goto compare;
              case 967:
                resword = &wordlist[256];
                goto compare;
              case 974:
                resword = &wordlist[257];
                goto compare;
              case 979:
                resword = &wordlist[258];
                goto compare;
              case 983:
                resword = &wordlist[259];
                goto compare;
              case 984:
                resword = &wordlist[260];
                goto compare;
              case 988:
                resword = &wordlist[261];
                goto compare;
              case 989:
                resword = &wordlist[262];
                goto compare;
              case 994:
                resword = &wordlist[263];
                goto compare;
              case 997:
                resword = &wordlist[264];
                goto compare;
              case 1002:
                resword = &wordlist[265];
                goto compare;
              case 1028:
                resword = &wordlist[266];
                goto compare;
              case 1032:
                resword = &wordlist[267];
                goto compare;
              case 1043:
                resword = &wordlist[268];
                goto compare;
              case 1050:
                resword = &wordlist[269];
                goto compare;
              case 1053:
                resword = &wordlist[270];
                goto compare;
              case 1054:
                resword = &wordlist[271];
                goto compare;
              case 1059:
                resword = &wordlist[272];
                goto compare;
              case 1060:
                resword = &wordlist[273];
                goto compare;
              case 1061:
                resword = &wordlist[274];
                goto compare;
              case 1063:
                resword = &wordlist[275];
                goto compare;
              case 1064:
                resword = &wordlist[276];
                goto compare;
              case 1069:
                resword = &wordlist[277];
                goto compare;
              case 1074:
                resword = &wordlist[278];
                goto compare;
              case 1078:
                resword = &wordlist[279];
                goto compare;
              case 1079:
                resword = &wordlist[280];
                goto compare;
              case 1085:
                resword = &wordlist[281];
                goto compare;
              case 1087:
                resword = &wordlist[282];
                goto compare;
              case 1092:
                resword = &wordlist[283];
                goto compare;
              case 1095:
                resword = &wordlist[284];
                goto compare;
              case 1097:
                resword = &wordlist[285];
                goto compare;
              case 1098:
                resword = &wordlist[286];
                goto compare;
              case 1102:
                resword = &wordlist[287];
                goto compare;
              case 1104:
                resword = &wordlist[288];
                goto compare;
              case 1107:
                resword = &wordlist[289];
                goto compare;
              case 1109:
                resword = &wordlist[290];
                goto compare;
              case 1111:
                resword = &wordlist[291];
                goto compare;
              case 1112:
                resword = &wordlist[292];
                goto compare;
              case 1114:
                resword = &wordlist[293];
                goto compare;
              case 1120:
                resword = &wordlist[294];
                goto compare;
              case 1122:
                resword = &wordlist[295];
                goto compare;
              case 1124:
                resword = &wordlist[296];
                goto compare;
              case 1127:
                resword = &wordlist[297];
                goto compare;
              case 1129:
                resword = &wordlist[298];
                goto compare;
              case 1134:
                resword = &wordlist[299];
                goto compare;
              case 1138:
                resword = &wordlist[300];
                goto compare;
              case 1149:
                resword = &wordlist[301];
                goto compare;
              case 1152:
                resword = &wordlist[302];
                goto compare;
              case 1153:
                resword = &wordlist[303];
                goto compare;
              case 1158:
                resword = &wordlist[304];
                goto compare;
              case 1159:
                resword = &wordlist[305];
                goto compare;
              case 1168:
                resword = &wordlist[306];
                goto compare;
              case 1171:
                resword = &wordlist[307];
                goto compare;
              case 1173:
                resword = &wordlist[308];
                goto compare;
              case 1174:
                resword = &wordlist[309];
                goto compare;
              case 1176:
                resword = &wordlist[310];
                goto compare;
              case 1179:
                resword = &wordlist[311];
                goto compare;
              case 1183:
                resword = &wordlist[312];
                goto compare;
              case 1184:
                resword = &wordlist[313];
                goto compare;
              case 1186:
                resword = &wordlist[314];
                goto compare;
              case 1195:
                resword = &wordlist[315];
                goto compare;
              case 1198:
                resword = &wordlist[316];
                goto compare;
              case 1199:
                resword = &wordlist[317];
                goto compare;
              case 1209:
                resword = &wordlist[318];
                goto compare;
              case 1214:
                resword = &wordlist[319];
                goto compare;
              case 1219:
                resword = &wordlist[320];
                goto compare;
              case 1224:
                resword = &wordlist[321];
                goto compare;
              case 1231:
                resword = &wordlist[322];
                goto compare;
              case 1235:
                resword = &wordlist[323];
                goto compare;
              case 1241:
                resword = &wordlist[324];
                goto compare;
              case 1243:
                resword = &wordlist[325];
                goto compare;
              case 1245:
                resword = &wordlist[326];
                goto compare;
              case 1247:
                resword = &wordlist[327];
                goto compare;
              case 1249:
                resword = &wordlist[328];
                goto compare;
              case 1251:
                resword = &wordlist[329];
                goto compare;
              case 1254:
                resword = &wordlist[330];
                goto compare;
              case 1257:
                resword = &wordlist[331];
                goto compare;
              case 1261:
                resword = &wordlist[332];
                goto compare;
              case 1263:
                resword = &wordlist[333];
                goto compare;
              case 1264:
                resword = &wordlist[334];
                goto compare;
              case 1265:
                resword = &wordlist[335];
                goto compare;
              case 1267:
                resword = &wordlist[336];
                goto compare;
              case 1268:
                resword = &wordlist[337];
                goto compare;
              case 1269:
                resword = &wordlist[338];
                goto compare;
              case 1270:
                resword = &wordlist[339];
                goto compare;
              case 1272:
                resword = &wordlist[340];
                goto compare;
              case 1273:
                resword = &wordlist[341];
                goto compare;
              case 1277:
                resword = &wordlist[342];
                goto compare;
              case 1278:
                resword = &wordlist[343];
                goto compare;
              case 1282:
                resword = &wordlist[344];
                goto compare;
              case 1283:
                resword = &wordlist[345];
                goto compare;
              case 1285:
                resword = &wordlist[346];
                goto compare;
              case 1288:
                resword = &wordlist[347];
                goto compare;
              case 1293:
                resword = &wordlist[348];
                goto compare;
              case 1294:
                resword = &wordlist[349];
                goto compare;
              case 1298:
                resword = &wordlist[350];
                goto compare;
              case 1299:
                resword = &wordlist[351];
                goto compare;
              case 1309:
                resword = &wordlist[352];
                goto compare;
              case 1313:
                resword = &wordlist[353];
                goto compare;
              case 1317:
                resword = &wordlist[354];
                goto compare;
              case 1318:
                resword = &wordlist[355];
                goto compare;
              case 1325:
                resword = &wordlist[356];
                goto compare;
              case 1327:
                resword = &wordlist[357];
                goto compare;
              case 1328:
                resword = &wordlist[358];
                goto compare;
              case 1329:
                resword = &wordlist[359];
                goto compare;
              case 1333:
                resword = &wordlist[360];
                goto compare;
              case 1338:
                resword = &wordlist[361];
                goto compare;
              case 1342:
                resword = &wordlist[362];
                goto compare;
              case 1343:
                resword = &wordlist[363];
                goto compare;
              case 1344:
                resword = &wordlist[364];
                goto compare;
              case 1353:
                resword = &wordlist[365];
                goto compare;
              case 1359:
                resword = &wordlist[366];
                goto compare;
              case 1361:
                resword = &wordlist[367];
                goto compare;
              case 1363:
                resword = &wordlist[368];
                goto compare;
              case 1368:
                resword = &wordlist[369];
                goto compare;
              case 1372:
                resword = &wordlist[370];
                goto compare;
              case 1373:
                resword = &wordlist[371];
                goto compare;
              case 1374:
                resword = &wordlist[372];
                goto compare;
              case 1379:
                resword = &wordlist[373];
                goto compare;
              case 1383:
                resword = &wordlist[374];
                goto compare;
              case 1388:
                resword = &wordlist[375];
                goto compare;
              case 1390:
                resword = &wordlist[376];
                goto compare;
              case 1392:
                resword = &wordlist[377];
                goto compare;
              case 1393:
                resword = &wordlist[378];
                goto compare;
              case 1399:
                resword = &wordlist[379];
                goto compare;
              case 1404:
                resword = &wordlist[380];
                goto compare;
              case 1406:
                resword = &wordlist[381];
                goto compare;
              case 1408:
                resword = &wordlist[382];
                goto compare;
              case 1409:
                resword = &wordlist[383];
                goto compare;
              case 1414:
                resword = &wordlist[384];
                goto compare;
              case 1416:
                resword = &wordlist[385];
                goto compare;
              case 1420:
                resword = &wordlist[386];
                goto compare;
              case 1424:
                resword = &wordlist[387];
                goto compare;
              case 1428:
                resword = &wordlist[388];
                goto compare;
              case 1429:
                resword = &wordlist[389];
                goto compare;
              case 1430:
                resword = &wordlist[390];
                goto compare;
              case 1435:
                resword = &wordlist[391];
                goto compare;
              case 1440:
                resword = &wordlist[392];
                goto compare;
              case 1445:
                resword = &wordlist[393];
                goto compare;
              case 1450:
                resword = &wordlist[394];
                goto compare;
              case 1453:
                resword = &wordlist[395];
                goto compare;
              case 1458:
                resword = &wordlist[396];
                goto compare;
              case 1460:
                resword = &wordlist[397];
                goto compare;
              case 1464:
                resword = &wordlist[398];
                goto compare;
              case 1465:
                resword = &wordlist[399];
                goto compare;
              case 1468:
                resword = &wordlist[400];
                goto compare;
              case 1470:
                resword = &wordlist[401];
                goto compare;
              case 1473:
                resword = &wordlist[402];
                goto compare;
              case 1475:
                resword = &wordlist[403];
                goto compare;
              case 1477:
                resword = &wordlist[404];
                goto compare;
              case 1483:
                resword = &wordlist[405];
                goto compare;
              case 1487:
                resword = &wordlist[406];
                goto compare;
              case 1492:
                resword = &wordlist[407];
                goto compare;
              case 1497:
                resword = &wordlist[408];
                goto compare;
              case 1500:
                resword = &wordlist[409];
                goto compare;
              case 1508:
                resword = &wordlist[410];
                goto compare;
              case 1512:
                resword = &wordlist[411];
                goto compare;
              case 1513:
                resword = &wordlist[412];
                goto compare;
              case 1536:
                resword = &wordlist[413];
                goto compare;
              case 1538:
                resword = &wordlist[414];
                goto compare;
              case 1539:
                resword = &wordlist[415];
                goto compare;
              case 1540:
                resword = &wordlist[416];
                goto compare;
              case 1541:
                resword = &wordlist[417];
                goto compare;
              case 1543:
                resword = &wordlist[418];
                goto compare;
              case 1545:
                resword = &wordlist[419];
                goto compare;
              case 1548:
                resword = &wordlist[420];
                goto compare;
              case 1550:
                resword = &wordlist[421];
                goto compare;
              case 1553:
                resword = &wordlist[422];
                goto compare;
              case 1554:
                resword = &wordlist[423];
                goto compare;
              case 1557:
                resword = &wordlist[424];
                goto compare;
              case 1558:
                resword = &wordlist[425];
                goto compare;
              case 1561:
                resword = &wordlist[426];
                goto compare;
              case 1564:
                resword = &wordlist[427];
                goto compare;
              case 1567:
                resword = &wordlist[428];
                goto compare;
              case 1568:
                resword = &wordlist[429];
                goto compare;
              case 1571:
                resword = &wordlist[430];
                goto compare;
              case 1578:
                resword = &wordlist[431];
                goto compare;
              case 1580:
                resword = &wordlist[432];
                goto compare;
              case 1581:
                resword = &wordlist[433];
                goto compare;
              case 1583:
                resword = &wordlist[434];
                goto compare;
              case 1586:
                resword = &wordlist[435];
                goto compare;
              case 1597:
                resword = &wordlist[436];
                goto compare;
              case 1605:
                resword = &wordlist[437];
                goto compare;
              case 1607:
                resword = &wordlist[438];
                goto compare;
              case 1608:
                resword = &wordlist[439];
                goto compare;
              case 1609:
                resword = &wordlist[440];
                goto compare;
              case 1613:
                resword = &wordlist[441];
                goto compare;
              case 1615:
                resword = &wordlist[442];
                goto compare;
              case 1617:
                resword = &wordlist[443];
                goto compare;
              case 1620:
                resword = &wordlist[444];
                goto compare;
              case 1625:
                resword = &wordlist[445];
                goto compare;
              case 1626:
                resword = &wordlist[446];
                goto compare;
              case 1628:
                resword = &wordlist[447];
                goto compare;
              case 1635:
                resword = &wordlist[448];
                goto compare;
              case 1639:
                resword = &wordlist[449];
                goto compare;
              case 1640:
                resword = &wordlist[450];
                goto compare;
              case 1645:
                resword = &wordlist[451];
                goto compare;
              case 1648:
                resword = &wordlist[452];
                goto compare;
              case 1656:
                resword = &wordlist[453];
                goto compare;
              case 1659:
                resword = &wordlist[454];
                goto compare;
              case 1660:
                resword = &wordlist[455];
                goto compare;
              case 1663:
                resword = &wordlist[456];
                goto compare;
              case 1664:
                resword = &wordlist[457];
                goto compare;
              case 1665:
                resword = &wordlist[458];
                goto compare;
              case 1666:
                resword = &wordlist[459];
                goto compare;
              case 1669:
                resword = &wordlist[460];
                goto compare;
              case 1670:
                resword = &wordlist[461];
                goto compare;
              case 1675:
                resword = &wordlist[462];
                goto compare;
              case 1678:
                resword = &wordlist[463];
                goto compare;
              case 1679:
                resword = &wordlist[464];
                goto compare;
              case 1680:
                resword = &wordlist[465];
                goto compare;
              case 1693:
                resword = &wordlist[466];
                goto compare;
              case 1694:
                resword = &wordlist[467];
                goto compare;
              case 1695:
                resword = &wordlist[468];
                goto compare;
              case 1697:
                resword = &wordlist[469];
                goto compare;
              case 1698:
                resword = &wordlist[470];
                goto compare;
              case 1699:
                resword = &wordlist[471];
                goto compare;
              case 1700:
                resword = &wordlist[472];
                goto compare;
              case 1701:
                resword = &wordlist[473];
                goto compare;
              case 1702:
                resword = &wordlist[474];
                goto compare;
              case 1707:
                resword = &wordlist[475];
                goto compare;
              case 1715:
                resword = &wordlist[476];
                goto compare;
              case 1720:
                resword = &wordlist[477];
                goto compare;
              case 1728:
                resword = &wordlist[478];
                goto compare;
              case 1729:
                resword = &wordlist[479];
                goto compare;
              case 1734:
                resword = &wordlist[480];
                goto compare;
              case 1743:
                resword = &wordlist[481];
                goto compare;
              case 1748:
                resword = &wordlist[482];
                goto compare;
              case 1754:
                resword = &wordlist[483];
                goto compare;
              case 1755:
                resword = &wordlist[484];
                goto compare;
              case 1759:
                resword = &wordlist[485];
                goto compare;
              case 1763:
                resword = &wordlist[486];
                goto compare;
              case 1764:
                resword = &wordlist[487];
                goto compare;
              case 1768:
                resword = &wordlist[488];
                goto compare;
              case 1769:
                resword = &wordlist[489];
                goto compare;
              case 1770:
                resword = &wordlist[490];
                goto compare;
              case 1773:
                resword = &wordlist[491];
                goto compare;
              case 1774:
                resword = &wordlist[492];
                goto compare;
              case 1775:
                resword = &wordlist[493];
                goto compare;
              case 1778:
                resword = &wordlist[494];
                goto compare;
              case 1779:
                resword = &wordlist[495];
                goto compare;
              case 1782:
                resword = &wordlist[496];
                goto compare;
              case 1784:
                resword = &wordlist[497];
                goto compare;
              case 1785:
                resword = &wordlist[498];
                goto compare;
              case 1787:
                resword = &wordlist[499];
                goto compare;
              case 1799:
                resword = &wordlist[500];
                goto compare;
              case 1803:
                resword = &wordlist[501];
                goto compare;
              case 1804:
                resword = &wordlist[502];
                goto compare;
              case 1808:
                resword = &wordlist[503];
                goto compare;
              case 1813:
                resword = &wordlist[504];
                goto compare;
              case 1814:
                resword = &wordlist[505];
                goto compare;
              case 1821:
                resword = &wordlist[506];
                goto compare;
              case 1823:
                resword = &wordlist[507];
                goto compare;
              case 1830:
                resword = &wordlist[508];
                goto compare;
              case 1835:
                resword = &wordlist[509];
                goto compare;
              case 1837:
                resword = &wordlist[510];
                goto compare;
              case 1843:
                resword = &wordlist[511];
                goto compare;
              case 1844:
                resword = &wordlist[512];
                goto compare;
              case 1850:
                resword = &wordlist[513];
                goto compare;
              case 1852:
                resword = &wordlist[514];
                goto compare;
              case 1853:
                resword = &wordlist[515];
                goto compare;
              case 1854:
                resword = &wordlist[516];
                goto compare;
              case 1855:
                resword = &wordlist[517];
                goto compare;
              case 1861:
                resword = &wordlist[518];
                goto compare;
              case 1867:
                resword = &wordlist[519];
                goto compare;
              case 1869:
                resword = &wordlist[520];
                goto compare;
              case 1870:
                resword = &wordlist[521];
                goto compare;
              case 1873:
                resword = &wordlist[522];
                goto compare;
              case 1877:
                resword = &wordlist[523];
                goto compare;
              case 1882:
                resword = &wordlist[524];
                goto compare;
              case 1886:
                resword = &wordlist[525];
                goto compare;
              case 1893:
                resword = &wordlist[526];
                goto compare;
              case 1899:
                resword = &wordlist[527];
                goto compare;
              case 1903:
                resword = &wordlist[528];
                goto compare;
              case 1908:
                resword = &wordlist[529];
                goto compare;
              case 1913:
                resword = &wordlist[530];
                goto compare;
              case 1923:
                resword = &wordlist[531];
                goto compare;
              case 1924:
                resword = &wordlist[532];
                goto compare;
              case 1927:
                resword = &wordlist[533];
                goto compare;
              case 1928:
                resword = &wordlist[534];
                goto compare;
              case 1930:
                resword = &wordlist[535];
                goto compare;
              case 1936:
                resword = &wordlist[536];
                goto compare;
              case 1947:
                resword = &wordlist[537];
                goto compare;
              case 1948:
                resword = &wordlist[538];
                goto compare;
              case 1952:
                resword = &wordlist[539];
                goto compare;
              case 1957:
                resword = &wordlist[540];
                goto compare;
              case 1962:
                resword = &wordlist[541];
                goto compare;
              case 1964:
                resword = &wordlist[542];
                goto compare;
              case 1965:
                resword = &wordlist[543];
                goto compare;
              case 1969:
                resword = &wordlist[544];
                goto compare;
              case 1970:
                resword = &wordlist[545];
                goto compare;
              case 1983:
                resword = &wordlist[546];
                goto compare;
              case 1986:
                resword = &wordlist[547];
                goto compare;
              case 1993:
                resword = &wordlist[548];
                goto compare;
              case 1997:
                resword = &wordlist[549];
                goto compare;
              case 1999:
                resword = &wordlist[550];
                goto compare;
              case 2008:
                resword = &wordlist[551];
                goto compare;
              case 2012:
                resword = &wordlist[552];
                goto compare;
              case 2014:
                resword = &wordlist[553];
                goto compare;
              case 2017:
                resword = &wordlist[554];
                goto compare;
              case 2018:
                resword = &wordlist[555];
                goto compare;
              case 2023:
                resword = &wordlist[556];
                goto compare;
              case 2027:
                resword = &wordlist[557];
                goto compare;
              case 2033:
                resword = &wordlist[558];
                goto compare;
              case 2035:
                resword = &wordlist[559];
                goto compare;
              case 2038:
                resword = &wordlist[560];
                goto compare;
              case 2042:
                resword = &wordlist[561];
                goto compare;
              case 2048:
                resword = &wordlist[562];
                goto compare;
              case 2051:
                resword = &wordlist[563];
                goto compare;
              case 2058:
                resword = &wordlist[564];
                goto compare;
              case 2061:
                resword = &wordlist[565];
                goto compare;
              case 2068:
                resword = &wordlist[566];
                goto compare;
              case 2070:
                resword = &wordlist[567];
                goto compare;
              case 2074:
                resword = &wordlist[568];
                goto compare;
              case 2076:
                resword = &wordlist[569];
                goto compare;
              case 2082:
                resword = &wordlist[570];
                goto compare;
              case 2085:
                resword = &wordlist[571];
                goto compare;
              case 2087:
                resword = &wordlist[572];
                goto compare;
              case 2088:
                resword = &wordlist[573];
                goto compare;
              case 2093:
                resword = &wordlist[574];
                goto compare;
              case 2094:
                resword = &wordlist[575];
                goto compare;
              case 2097:
                resword = &wordlist[576];
                goto compare;
              case 2098:
                resword = &wordlist[577];
                goto compare;
              case 2102:
                resword = &wordlist[578];
                goto compare;
              case 2115:
                resword = &wordlist[579];
                goto compare;
              case 2142:
                resword = &wordlist[580];
                goto compare;
              case 2155:
                resword = &wordlist[581];
                goto compare;
              case 2163:
                resword = &wordlist[582];
                goto compare;
              case 2166:
                resword = &wordlist[583];
                goto compare;
              case 2167:
                resword = &wordlist[584];
                goto compare;
              case 2170:
                resword = &wordlist[585];
                goto compare;
              case 2171:
                resword = &wordlist[586];
                goto compare;
              case 2174:
                resword = &wordlist[587];
                goto compare;
              case 2178:
                resword = &wordlist[588];
                goto compare;
              case 2183:
                resword = &wordlist[589];
                goto compare;
              case 2184:
                resword = &wordlist[590];
                goto compare;
              case 2185:
                resword = &wordlist[591];
                goto compare;
              case 2191:
                resword = &wordlist[592];
                goto compare;
              case 2192:
                resword = &wordlist[593];
                goto compare;
              case 2193:
                resword = &wordlist[594];
                goto compare;
              case 2195:
                resword = &wordlist[595];
                goto compare;
              case 2198:
                resword = &wordlist[596];
                goto compare;
              case 2207:
                resword = &wordlist[597];
                goto compare;
              case 2211:
                resword = &wordlist[598];
                goto compare;
              case 2213:
                resword = &wordlist[599];
                goto compare;
              case 2214:
                resword = &wordlist[600];
                goto compare;
              case 2221:
                resword = &wordlist[601];
                goto compare;
              case 2227:
                resword = &wordlist[602];
                goto compare;
              case 2228:
                resword = &wordlist[603];
                goto compare;
              case 2231:
                resword = &wordlist[604];
                goto compare;
              case 2233:
                resword = &wordlist[605];
                goto compare;
              case 2236:
                resword = &wordlist[606];
                goto compare;
              case 2238:
                resword = &wordlist[607];
                goto compare;
              case 2239:
                resword = &wordlist[608];
                goto compare;
              case 2240:
                resword = &wordlist[609];
                goto compare;
              case 2241:
                resword = &wordlist[610];
                goto compare;
              case 2247:
                resword = &wordlist[611];
                goto compare;
              case 2255:
                resword = &wordlist[612];
                goto compare;
              case 2257:
                resword = &wordlist[613];
                goto compare;
              case 2258:
                resword = &wordlist[614];
                goto compare;
              case 2259:
                resword = &wordlist[615];
                goto compare;
              case 2260:
                resword = &wordlist[616];
                goto compare;
              case 2267:
                resword = &wordlist[617];
                goto compare;
              case 2274:
                resword = &wordlist[618];
                goto compare;
              case 2276:
                resword = &wordlist[619];
                goto compare;
              case 2278:
                resword = &wordlist[620];
                goto compare;
              case 2283:
                resword = &wordlist[621];
                goto compare;
              case 2292:
                resword = &wordlist[622];
                goto compare;
              case 2303:
                resword = &wordlist[623];
                goto compare;
              case 2311:
                resword = &wordlist[624];
                goto compare;
              case 2314:
                resword = &wordlist[625];
                goto compare;
              case 2316:
                resword = &wordlist[626];
                goto compare;
              case 2318:
                resword = &wordlist[627];
                goto compare;
              case 2319:
                resword = &wordlist[628];
                goto compare;
              case 2320:
                resword = &wordlist[629];
                goto compare;
              case 2321:
                resword = &wordlist[630];
                goto compare;
              case 2322:
                resword = &wordlist[631];
                goto compare;
              case 2323:
                resword = &wordlist[632];
                goto compare;
              case 2325:
                resword = &wordlist[633];
                goto compare;
              case 2326:
                resword = &wordlist[634];
                goto compare;
              case 2328:
                resword = &wordlist[635];
                goto compare;
              case 2329:
                resword = &wordlist[636];
                goto compare;
              case 2330:
                resword = &wordlist[637];
                goto compare;
              case 2332:
                resword = &wordlist[638];
                goto compare;
              case 2334:
                resword = &wordlist[639];
                goto compare;
              case 2339:
                resword = &wordlist[640];
                goto compare;
              case 2345:
                resword = &wordlist[641];
                goto compare;
              case 2349:
                resword = &wordlist[642];
                goto compare;
              case 2366:
                resword = &wordlist[643];
                goto compare;
              case 2368:
                resword = &wordlist[644];
                goto compare;
              case 2373:
                resword = &wordlist[645];
                goto compare;
              case 2375:
                resword = &wordlist[646];
                goto compare;
              case 2379:
                resword = &wordlist[647];
                goto compare;
              case 2384:
                resword = &wordlist[648];
                goto compare;
              case 2385:
                resword = &wordlist[649];
                goto compare;
              case 2394:
                resword = &wordlist[650];
                goto compare;
              case 2395:
                resword = &wordlist[651];
                goto compare;
              case 2398:
                resword = &wordlist[652];
                goto compare;
              case 2408:
                resword = &wordlist[653];
                goto compare;
              case 2413:
                resword = &wordlist[654];
                goto compare;
              case 2414:
                resword = &wordlist[655];
                goto compare;
              case 2423:
                resword = &wordlist[656];
                goto compare;
              case 2424:
                resword = &wordlist[657];
                goto compare;
              case 2431:
                resword = &wordlist[658];
                goto compare;
              case 2435:
                resword = &wordlist[659];
                goto compare;
              case 2437:
                resword = &wordlist[660];
                goto compare;
              case 2438:
                resword = &wordlist[661];
                goto compare;
              case 2439:
                resword = &wordlist[662];
                goto compare;
              case 2444:
                resword = &wordlist[663];
                goto compare;
              case 2448:
                resword = &wordlist[664];
                goto compare;
              case 2449:
                resword = &wordlist[665];
                goto compare;
              case 2454:
                resword = &wordlist[666];
                goto compare;
              case 2458:
                resword = &wordlist[667];
                goto compare;
              case 2459:
                resword = &wordlist[668];
                goto compare;
              case 2460:
                resword = &wordlist[669];
                goto compare;
              case 2464:
                resword = &wordlist[670];
                goto compare;
              case 2465:
                resword = &wordlist[671];
                goto compare;
              case 2468:
                resword = &wordlist[672];
                goto compare;
              case 2469:
                resword = &wordlist[673];
                goto compare;
              case 2473:
                resword = &wordlist[674];
                goto compare;
              case 2484:
                resword = &wordlist[675];
                goto compare;
              case 2485:
                resword = &wordlist[676];
                goto compare;
              case 2487:
                resword = &wordlist[677];
                goto compare;
              case 2488:
                resword = &wordlist[678];
                goto compare;
              case 2490:
                resword = &wordlist[679];
                goto compare;
              case 2492:
                resword = &wordlist[680];
                goto compare;
              case 2493:
                resword = &wordlist[681];
                goto compare;
              case 2494:
                resword = &wordlist[682];
                goto compare;
              case 2502:
                resword = &wordlist[683];
                goto compare;
              case 2503:
                resword = &wordlist[684];
                goto compare;
              case 2505:
                resword = &wordlist[685];
                goto compare;
              case 2513:
                resword = &wordlist[686];
                goto compare;
              case 2515:
                resword = &wordlist[687];
                goto compare;
              case 2517:
                resword = &wordlist[688];
                goto compare;
              case 2518:
                resword = &wordlist[689];
                goto compare;
              case 2521:
                resword = &wordlist[690];
                goto compare;
              case 2524:
                resword = &wordlist[691];
                goto compare;
              case 2525:
                resword = &wordlist[692];
                goto compare;
              case 2528:
                resword = &wordlist[693];
                goto compare;
              case 2529:
                resword = &wordlist[694];
                goto compare;
              case 2534:
                resword = &wordlist[695];
                goto compare;
              case 2538:
                resword = &wordlist[696];
                goto compare;
              case 2539:
                resword = &wordlist[697];
                goto compare;
              case 2543:
                resword = &wordlist[698];
                goto compare;
              case 2545:
                resword = &wordlist[699];
                goto compare;
              case 2549:
                resword = &wordlist[700];
                goto compare;
              case 2563:
                resword = &wordlist[701];
                goto compare;
              case 2564:
                resword = &wordlist[702];
                goto compare;
              case 2565:
                resword = &wordlist[703];
                goto compare;
              case 2575:
                resword = &wordlist[704];
                goto compare;
              case 2578:
                resword = &wordlist[705];
                goto compare;
              case 2585:
                resword = &wordlist[706];
                goto compare;
              case 2597:
                resword = &wordlist[707];
                goto compare;
              case 2601:
                resword = &wordlist[708];
                goto compare;
              case 2603:
                resword = &wordlist[709];
                goto compare;
              case 2604:
                resword = &wordlist[710];
                goto compare;
              case 2607:
                resword = &wordlist[711];
                goto compare;
              case 2610:
                resword = &wordlist[712];
                goto compare;
              case 2615:
                resword = &wordlist[713];
                goto compare;
              case 2619:
                resword = &wordlist[714];
                goto compare;
              case 2620:
                resword = &wordlist[715];
                goto compare;
              case 2624:
                resword = &wordlist[716];
                goto compare;
              case 2625:
                resword = &wordlist[717];
                goto compare;
              case 2629:
                resword = &wordlist[718];
                goto compare;
              case 2630:
                resword = &wordlist[719];
                goto compare;
              case 2632:
                resword = &wordlist[720];
                goto compare;
              case 2635:
                resword = &wordlist[721];
                goto compare;
              case 2642:
                resword = &wordlist[722];
                goto compare;
              case 2643:
                resword = &wordlist[723];
                goto compare;
              case 2644:
                resword = &wordlist[724];
                goto compare;
              case 2646:
                resword = &wordlist[725];
                goto compare;
              case 2647:
                resword = &wordlist[726];
                goto compare;
              case 2654:
                resword = &wordlist[727];
                goto compare;
              case 2655:
                resword = &wordlist[728];
                goto compare;
              case 2656:
                resword = &wordlist[729];
                goto compare;
              case 2658:
                resword = &wordlist[730];
                goto compare;
              case 2659:
                resword = &wordlist[731];
                goto compare;
              case 2665:
                resword = &wordlist[732];
                goto compare;
              case 2667:
                resword = &wordlist[733];
                goto compare;
              case 2668:
                resword = &wordlist[734];
                goto compare;
              case 2672:
                resword = &wordlist[735];
                goto compare;
              case 2675:
                resword = &wordlist[736];
                goto compare;
              case 2683:
                resword = &wordlist[737];
                goto compare;
              case 2689:
                resword = &wordlist[738];
                goto compare;
              case 2693:
                resword = &wordlist[739];
                goto compare;
              case 2694:
                resword = &wordlist[740];
                goto compare;
              case 2699:
                resword = &wordlist[741];
                goto compare;
              case 2700:
                resword = &wordlist[742];
                goto compare;
              case 2703:
                resword = &wordlist[743];
                goto compare;
              case 2704:
                resword = &wordlist[744];
                goto compare;
              case 2708:
                resword = &wordlist[745];
                goto compare;
              case 2709:
                resword = &wordlist[746];
                goto compare;
              case 2711:
                resword = &wordlist[747];
                goto compare;
              case 2712:
                resword = &wordlist[748];
                goto compare;
              case 2714:
                resword = &wordlist[749];
                goto compare;
              case 2715:
                resword = &wordlist[750];
                goto compare;
              case 2717:
                resword = &wordlist[751];
                goto compare;
              case 2723:
                resword = &wordlist[752];
                goto compare;
              case 2724:
                resword = &wordlist[753];
                goto compare;
              case 2729:
                resword = &wordlist[754];
                goto compare;
              case 2734:
                resword = &wordlist[755];
                goto compare;
              case 2735:
                resword = &wordlist[756];
                goto compare;
              case 2736:
                resword = &wordlist[757];
                goto compare;
              case 2738:
                resword = &wordlist[758];
                goto compare;
              case 2739:
                resword = &wordlist[759];
                goto compare;
              case 2740:
                resword = &wordlist[760];
                goto compare;
              case 2741:
                resword = &wordlist[761];
                goto compare;
              case 2744:
                resword = &wordlist[762];
                goto compare;
              case 2750:
                resword = &wordlist[763];
                goto compare;
              case 2753:
                resword = &wordlist[764];
                goto compare;
              case 2755:
                resword = &wordlist[765];
                goto compare;
              case 2760:
                resword = &wordlist[766];
                goto compare;
              case 2763:
                resword = &wordlist[767];
                goto compare;
              case 2765:
                resword = &wordlist[768];
                goto compare;
              case 2774:
                resword = &wordlist[769];
                goto compare;
              case 2775:
                resword = &wordlist[770];
                goto compare;
              case 2781:
                resword = &wordlist[771];
                goto compare;
              case 2785:
                resword = &wordlist[772];
                goto compare;
              case 2787:
                resword = &wordlist[773];
                goto compare;
              case 2794:
                resword = &wordlist[774];
                goto compare;
              case 2797:
                resword = &wordlist[775];
                goto compare;
              case 2801:
                resword = &wordlist[776];
                goto compare;
              case 2806:
                resword = &wordlist[777];
                goto compare;
              case 2808:
                resword = &wordlist[778];
                goto compare;
              case 2809:
                resword = &wordlist[779];
                goto compare;
              case 2810:
                resword = &wordlist[780];
                goto compare;
              case 2821:
                resword = &wordlist[781];
                goto compare;
              case 2827:
                resword = &wordlist[782];
                goto compare;
              case 2828:
                resword = &wordlist[783];
                goto compare;
              case 2832:
                resword = &wordlist[784];
                goto compare;
              case 2833:
                resword = &wordlist[785];
                goto compare;
              case 2837:
                resword = &wordlist[786];
                goto compare;
              case 2848:
                resword = &wordlist[787];
                goto compare;
              case 2850:
                resword = &wordlist[788];
                goto compare;
              case 2852:
                resword = &wordlist[789];
                goto compare;
              case 2858:
                resword = &wordlist[790];
                goto compare;
              case 2863:
                resword = &wordlist[791];
                goto compare;
              case 2865:
                resword = &wordlist[792];
                goto compare;
              case 2867:
                resword = &wordlist[793];
                goto compare;
              case 2873:
                resword = &wordlist[794];
                goto compare;
              case 2874:
                resword = &wordlist[795];
                goto compare;
              case 2877:
                resword = &wordlist[796];
                goto compare;
              case 2878:
                resword = &wordlist[797];
                goto compare;
              case 2879:
                resword = &wordlist[798];
                goto compare;
              case 2881:
                resword = &wordlist[799];
                goto compare;
              case 2888:
                resword = &wordlist[800];
                goto compare;
              case 2889:
                resword = &wordlist[801];
                goto compare;
              case 2895:
                resword = &wordlist[802];
                goto compare;
              case 2898:
                resword = &wordlist[803];
                goto compare;
              case 2899:
                resword = &wordlist[804];
                goto compare;
              case 2901:
                resword = &wordlist[805];
                goto compare;
              case 2902:
                resword = &wordlist[806];
                goto compare;
              case 2903:
                resword = &wordlist[807];
                goto compare;
              case 2905:
                resword = &wordlist[808];
                goto compare;
              case 2906:
                resword = &wordlist[809];
                goto compare;
              case 2917:
                resword = &wordlist[810];
                goto compare;
              case 2919:
                resword = &wordlist[811];
                goto compare;
              case 2922:
                resword = &wordlist[812];
                goto compare;
              case 2927:
                resword = &wordlist[813];
                goto compare;
              case 2931:
                resword = &wordlist[814];
                goto compare;
              case 2933:
                resword = &wordlist[815];
                goto compare;
              case 2934:
                resword = &wordlist[816];
                goto compare;
              case 2937:
                resword = &wordlist[817];
                goto compare;
              case 2942:
                resword = &wordlist[818];
                goto compare;
              case 2943:
                resword = &wordlist[819];
                goto compare;
              case 2945:
                resword = &wordlist[820];
                goto compare;
              case 2947:
                resword = &wordlist[821];
                goto compare;
              case 2949:
                resword = &wordlist[822];
                goto compare;
              case 2950:
                resword = &wordlist[823];
                goto compare;
              case 2954:
                resword = &wordlist[824];
                goto compare;
              case 2957:
                resword = &wordlist[825];
                goto compare;
              case 2964:
                resword = &wordlist[826];
                goto compare;
              case 2966:
                resword = &wordlist[827];
                goto compare;
              case 2967:
                resword = &wordlist[828];
                goto compare;
              case 2974:
                resword = &wordlist[829];
                goto compare;
              case 2975:
                resword = &wordlist[830];
                goto compare;
              case 2976:
                resword = &wordlist[831];
                goto compare;
              case 2977:
                resword = &wordlist[832];
                goto compare;
              case 2984:
                resword = &wordlist[833];
                goto compare;
              case 2985:
                resword = &wordlist[834];
                goto compare;
              case 2992:
                resword = &wordlist[835];
                goto compare;
              case 2995:
                resword = &wordlist[836];
                goto compare;
              case 2996:
                resword = &wordlist[837];
                goto compare;
              case 3003:
                resword = &wordlist[838];
                goto compare;
              case 3004:
                resword = &wordlist[839];
                goto compare;
              case 3008:
                resword = &wordlist[840];
                goto compare;
              case 3014:
                resword = &wordlist[841];
                goto compare;
              case 3017:
                resword = &wordlist[842];
                goto compare;
              case 3025:
                resword = &wordlist[843];
                goto compare;
              case 3028:
                resword = &wordlist[844];
                goto compare;
              case 3029:
                resword = &wordlist[845];
                goto compare;
              case 3032:
                resword = &wordlist[846];
                goto compare;
              case 3034:
                resword = &wordlist[847];
                goto compare;
              case 3037:
                resword = &wordlist[848];
                goto compare;
              case 3038:
                resword = &wordlist[849];
                goto compare;
              case 3039:
                resword = &wordlist[850];
                goto compare;
              case 3047:
                resword = &wordlist[851];
                goto compare;
              case 3056:
                resword = &wordlist[852];
                goto compare;
              case 3062:
                resword = &wordlist[853];
                goto compare;
              case 3064:
                resword = &wordlist[854];
                goto compare;
              case 3065:
                resword = &wordlist[855];
                goto compare;
              case 3068:
                resword = &wordlist[856];
                goto compare;
              case 3070:
                resword = &wordlist[857];
                goto compare;
              case 3078:
                resword = &wordlist[858];
                goto compare;
              case 3080:
                resword = &wordlist[859];
                goto compare;
              case 3086:
                resword = &wordlist[860];
                goto compare;
              case 3090:
                resword = &wordlist[861];
                goto compare;
              case 3092:
                resword = &wordlist[862];
                goto compare;
              case 3094:
                resword = &wordlist[863];
                goto compare;
              case 3097:
                resword = &wordlist[864];
                goto compare;
              case 3098:
                resword = &wordlist[865];
                goto compare;
              case 3099:
                resword = &wordlist[866];
                goto compare;
              case 3100:
                resword = &wordlist[867];
                goto compare;
              case 3101:
                resword = &wordlist[868];
                goto compare;
              case 3102:
                resword = &wordlist[869];
                goto compare;
              case 3111:
                resword = &wordlist[870];
                goto compare;
              case 3112:
                resword = &wordlist[871];
                goto compare;
              case 3113:
                resword = &wordlist[872];
                goto compare;
              case 3117:
                resword = &wordlist[873];
                goto compare;
              case 3124:
                resword = &wordlist[874];
                goto compare;
              case 3127:
                resword = &wordlist[875];
                goto compare;
              case 3128:
                resword = &wordlist[876];
                goto compare;
              case 3134:
                resword = &wordlist[877];
                goto compare;
              case 3135:
                resword = &wordlist[878];
                goto compare;
              case 3137:
                resword = &wordlist[879];
                goto compare;
              case 3140:
                resword = &wordlist[880];
                goto compare;
              case 3144:
                resword = &wordlist[881];
                goto compare;
              case 3148:
                resword = &wordlist[882];
                goto compare;
              case 3149:
                resword = &wordlist[883];
                goto compare;
              case 3153:
                resword = &wordlist[884];
                goto compare;
              case 3154:
                resword = &wordlist[885];
                goto compare;
              case 3157:
                resword = &wordlist[886];
                goto compare;
              case 3167:
                resword = &wordlist[887];
                goto compare;
              case 3169:
                resword = &wordlist[888];
                goto compare;
              case 3176:
                resword = &wordlist[889];
                goto compare;
              case 3179:
                resword = &wordlist[890];
                goto compare;
              case 3183:
                resword = &wordlist[891];
                goto compare;
              case 3184:
                resword = &wordlist[892];
                goto compare;
              case 3188:
                resword = &wordlist[893];
                goto compare;
              case 3189:
                resword = &wordlist[894];
                goto compare;
              case 3193:
                resword = &wordlist[895];
                goto compare;
              case 3194:
                resword = &wordlist[896];
                goto compare;
              case 3199:
                resword = &wordlist[897];
                goto compare;
              case 3203:
                resword = &wordlist[898];
                goto compare;
              case 3204:
                resword = &wordlist[899];
                goto compare;
              case 3207:
                resword = &wordlist[900];
                goto compare;
              case 3209:
                resword = &wordlist[901];
                goto compare;
              case 3212:
                resword = &wordlist[902];
                goto compare;
              case 3213:
                resword = &wordlist[903];
                goto compare;
              case 3215:
                resword = &wordlist[904];
                goto compare;
              case 3216:
                resword = &wordlist[905];
                goto compare;
              case 3219:
                resword = &wordlist[906];
                goto compare;
              case 3229:
                resword = &wordlist[907];
                goto compare;
              case 3238:
                resword = &wordlist[908];
                goto compare;
              case 3240:
                resword = &wordlist[909];
                goto compare;
              case 3241:
                resword = &wordlist[910];
                goto compare;
              case 3242:
                resword = &wordlist[911];
                goto compare;
              case 3243:
                resword = &wordlist[912];
                goto compare;
              case 3245:
                resword = &wordlist[913];
                goto compare;
              case 3246:
                resword = &wordlist[914];
                goto compare;
              case 3247:
                resword = &wordlist[915];
                goto compare;
              case 3252:
                resword = &wordlist[916];
                goto compare;
              case 3253:
                resword = &wordlist[917];
                goto compare;
              case 3254:
                resword = &wordlist[918];
                goto compare;
              case 3257:
                resword = &wordlist[919];
                goto compare;
              case 3258:
                resword = &wordlist[920];
                goto compare;
              case 3262:
                resword = &wordlist[921];
                goto compare;
              case 3263:
                resword = &wordlist[922];
                goto compare;
              case 3267:
                resword = &wordlist[923];
                goto compare;
              case 3269:
                resword = &wordlist[924];
                goto compare;
              case 3272:
                resword = &wordlist[925];
                goto compare;
              case 3275:
                resword = &wordlist[926];
                goto compare;
              case 3276:
                resword = &wordlist[927];
                goto compare;
              case 3285:
                resword = &wordlist[928];
                goto compare;
              case 3304:
                resword = &wordlist[929];
                goto compare;
              case 3308:
                resword = &wordlist[930];
                goto compare;
              case 3309:
                resword = &wordlist[931];
                goto compare;
              case 3313:
                resword = &wordlist[932];
                goto compare;
              case 3314:
                resword = &wordlist[933];
                goto compare;
              case 3331:
                resword = &wordlist[934];
                goto compare;
              case 3332:
                resword = &wordlist[935];
                goto compare;
              case 3334:
                resword = &wordlist[936];
                goto compare;
              case 3347:
                resword = &wordlist[937];
                goto compare;
              case 3351:
                resword = &wordlist[938];
                goto compare;
              case 3352:
                resword = &wordlist[939];
                goto compare;
              case 3355:
                resword = &wordlist[940];
                goto compare;
              case 3367:
                resword = &wordlist[941];
                goto compare;
              case 3368:
                resword = &wordlist[942];
                goto compare;
              case 3373:
                resword = &wordlist[943];
                goto compare;
              case 3374:
                resword = &wordlist[944];
                goto compare;
              case 3379:
                resword = &wordlist[945];
                goto compare;
              case 3381:
                resword = &wordlist[946];
                goto compare;
              case 3394:
                resword = &wordlist[947];
                goto compare;
              case 3397:
                resword = &wordlist[948];
                goto compare;
              case 3398:
                resword = &wordlist[949];
                goto compare;
              case 3400:
                resword = &wordlist[950];
                goto compare;
              case 3403:
                resword = &wordlist[951];
                goto compare;
              case 3407:
                resword = &wordlist[952];
                goto compare;
              case 3408:
                resword = &wordlist[953];
                goto compare;
              case 3409:
                resword = &wordlist[954];
                goto compare;
              case 3410:
                resword = &wordlist[955];
                goto compare;
              case 3425:
                resword = &wordlist[956];
                goto compare;
              case 3430:
                resword = &wordlist[957];
                goto compare;
              case 3433:
                resword = &wordlist[958];
                goto compare;
              case 3451:
                resword = &wordlist[959];
                goto compare;
              case 3457:
                resword = &wordlist[960];
                goto compare;
              case 3458:
                resword = &wordlist[961];
                goto compare;
              case 3462:
                resword = &wordlist[962];
                goto compare;
              case 3463:
                resword = &wordlist[963];
                goto compare;
              case 3465:
                resword = &wordlist[964];
                goto compare;
              case 3468:
                resword = &wordlist[965];
                goto compare;
              case 3473:
                resword = &wordlist[966];
                goto compare;
              case 3478:
                resword = &wordlist[967];
                goto compare;
              case 3479:
                resword = &wordlist[968];
                goto compare;
              case 3480:
                resword = &wordlist[969];
                goto compare;
              case 3483:
                resword = &wordlist[970];
                goto compare;
              case 3486:
                resword = &wordlist[971];
                goto compare;
              case 3487:
                resword = &wordlist[972];
                goto compare;
              case 3488:
                resword = &wordlist[973];
                goto compare;
              case 3490:
                resword = &wordlist[974];
                goto compare;
              case 3491:
                resword = &wordlist[975];
                goto compare;
              case 3494:
                resword = &wordlist[976];
                goto compare;
              case 3497:
                resword = &wordlist[977];
                goto compare;
              case 3498:
                resword = &wordlist[978];
                goto compare;
              case 3500:
                resword = &wordlist[979];
                goto compare;
              case 3504:
                resword = &wordlist[980];
                goto compare;
              case 3505:
                resword = &wordlist[981];
                goto compare;
              case 3507:
                resword = &wordlist[982];
                goto compare;
              case 3508:
                resword = &wordlist[983];
                goto compare;
              case 3510:
                resword = &wordlist[984];
                goto compare;
              case 3512:
                resword = &wordlist[985];
                goto compare;
              case 3513:
                resword = &wordlist[986];
                goto compare;
              case 3519:
                resword = &wordlist[987];
                goto compare;
              case 3520:
                resword = &wordlist[988];
                goto compare;
              case 3521:
                resword = &wordlist[989];
                goto compare;
              case 3524:
                resword = &wordlist[990];
                goto compare;
              case 3527:
                resword = &wordlist[991];
                goto compare;
              case 3529:
                resword = &wordlist[992];
                goto compare;
              case 3534:
                resword = &wordlist[993];
                goto compare;
              case 3545:
                resword = &wordlist[994];
                goto compare;
              case 3548:
                resword = &wordlist[995];
                goto compare;
              case 3554:
                resword = &wordlist[996];
                goto compare;
              case 3555:
                resword = &wordlist[997];
                goto compare;
              case 3558:
                resword = &wordlist[998];
                goto compare;
              case 3562:
                resword = &wordlist[999];
                goto compare;
              case 3568:
                resword = &wordlist[1000];
                goto compare;
              case 3571:
                resword = &wordlist[1001];
                goto compare;
              case 3574:
                resword = &wordlist[1002];
                goto compare;
              case 3578:
                resword = &wordlist[1003];
                goto compare;
              case 3579:
                resword = &wordlist[1004];
                goto compare;
              case 3580:
                resword = &wordlist[1005];
                goto compare;
              case 3581:
                resword = &wordlist[1006];
                goto compare;
              case 3584:
                resword = &wordlist[1007];
                goto compare;
              case 3589:
                resword = &wordlist[1008];
                goto compare;
              case 3592:
                resword = &wordlist[1009];
                goto compare;
              case 3593:
                resword = &wordlist[1010];
                goto compare;
              case 3595:
                resword = &wordlist[1011];
                goto compare;
              case 3598:
                resword = &wordlist[1012];
                goto compare;
              case 3599:
                resword = &wordlist[1013];
                goto compare;
              case 3600:
                resword = &wordlist[1014];
                goto compare;
              case 3602:
                resword = &wordlist[1015];
                goto compare;
              case 3603:
                resword = &wordlist[1016];
                goto compare;
              case 3604:
                resword = &wordlist[1017];
                goto compare;
              case 3607:
                resword = &wordlist[1018];
                goto compare;
              case 3608:
                resword = &wordlist[1019];
                goto compare;
              case 3610:
                resword = &wordlist[1020];
                goto compare;
              case 3611:
                resword = &wordlist[1021];
                goto compare;
              case 3613:
                resword = &wordlist[1022];
                goto compare;
              case 3616:
                resword = &wordlist[1023];
                goto compare;
              case 3622:
                resword = &wordlist[1024];
                goto compare;
              case 3628:
                resword = &wordlist[1025];
                goto compare;
              case 3630:
                resword = &wordlist[1026];
                goto compare;
              case 3633:
                resword = &wordlist[1027];
                goto compare;
              case 3635:
                resword = &wordlist[1028];
                goto compare;
              case 3636:
                resword = &wordlist[1029];
                goto compare;
              case 3638:
                resword = &wordlist[1030];
                goto compare;
              case 3643:
                resword = &wordlist[1031];
                goto compare;
              case 3645:
                resword = &wordlist[1032];
                goto compare;
              case 3647:
                resword = &wordlist[1033];
                goto compare;
              case 3659:
                resword = &wordlist[1034];
                goto compare;
              case 3662:
                resword = &wordlist[1035];
                goto compare;
              case 3663:
                resword = &wordlist[1036];
                goto compare;
              case 3668:
                resword = &wordlist[1037];
                goto compare;
              case 3673:
                resword = &wordlist[1038];
                goto compare;
              case 3675:
                resword = &wordlist[1039];
                goto compare;
              case 3678:
                resword = &wordlist[1040];
                goto compare;
              case 3687:
                resword = &wordlist[1041];
                goto compare;
              case 3703:
                resword = &wordlist[1042];
                goto compare;
              case 3704:
                resword = &wordlist[1043];
                goto compare;
              case 3706:
                resword = &wordlist[1044];
                goto compare;
              case 3707:
                resword = &wordlist[1045];
                goto compare;
              case 3708:
                resword = &wordlist[1046];
                goto compare;
              case 3710:
                resword = &wordlist[1047];
                goto compare;
              case 3718:
                resword = &wordlist[1048];
                goto compare;
              case 3719:
                resword = &wordlist[1049];
                goto compare;
              case 3720:
                resword = &wordlist[1050];
                goto compare;
              case 3725:
                resword = &wordlist[1051];
                goto compare;
              case 3727:
                resword = &wordlist[1052];
                goto compare;
              case 3732:
                resword = &wordlist[1053];
                goto compare;
              case 3739:
                resword = &wordlist[1054];
                goto compare;
              case 3744:
                resword = &wordlist[1055];
                goto compare;
              case 3745:
                resword = &wordlist[1056];
                goto compare;
              case 3746:
                resword = &wordlist[1057];
                goto compare;
              case 3748:
                resword = &wordlist[1058];
                goto compare;
              case 3749:
                resword = &wordlist[1059];
                goto compare;
              case 3754:
                resword = &wordlist[1060];
                goto compare;
              case 3756:
                resword = &wordlist[1061];
                goto compare;
              case 3757:
                resword = &wordlist[1062];
                goto compare;
              case 3758:
                resword = &wordlist[1063];
                goto compare;
              case 3759:
                resword = &wordlist[1064];
                goto compare;
              case 3767:
                resword = &wordlist[1065];
                goto compare;
              case 3775:
                resword = &wordlist[1066];
                goto compare;
              case 3777:
                resword = &wordlist[1067];
                goto compare;
              case 3778:
                resword = &wordlist[1068];
                goto compare;
              case 3781:
                resword = &wordlist[1069];
                goto compare;
              case 3785:
                resword = &wordlist[1070];
                goto compare;
              case 3790:
                resword = &wordlist[1071];
                goto compare;
              case 3795:
                resword = &wordlist[1072];
                goto compare;
              case 3798:
                resword = &wordlist[1073];
                goto compare;
              case 3808:
                resword = &wordlist[1074];
                goto compare;
              case 3815:
                resword = &wordlist[1075];
                goto compare;
              case 3817:
                resword = &wordlist[1076];
                goto compare;
              case 3830:
                resword = &wordlist[1077];
                goto compare;
              case 3834:
                resword = &wordlist[1078];
                goto compare;
              case 3835:
                resword = &wordlist[1079];
                goto compare;
              case 3842:
                resword = &wordlist[1080];
                goto compare;
              case 3843:
                resword = &wordlist[1081];
                goto compare;
              case 3844:
                resword = &wordlist[1082];
                goto compare;
              case 3845:
                resword = &wordlist[1083];
                goto compare;
              case 3851:
                resword = &wordlist[1084];
                goto compare;
              case 3854:
                resword = &wordlist[1085];
                goto compare;
              case 3857:
                resword = &wordlist[1086];
                goto compare;
              case 3860:
                resword = &wordlist[1087];
                goto compare;
              case 3865:
                resword = &wordlist[1088];
                goto compare;
              case 3869:
                resword = &wordlist[1089];
                goto compare;
              case 3870:
                resword = &wordlist[1090];
                goto compare;
              case 3875:
                resword = &wordlist[1091];
                goto compare;
              case 3878:
                resword = &wordlist[1092];
                goto compare;
              case 3879:
                resword = &wordlist[1093];
                goto compare;
              case 3882:
                resword = &wordlist[1094];
                goto compare;
              case 3883:
                resword = &wordlist[1095];
                goto compare;
              case 3884:
                resword = &wordlist[1096];
                goto compare;
              case 3885:
                resword = &wordlist[1097];
                goto compare;
              case 3887:
                resword = &wordlist[1098];
                goto compare;
              case 3888:
                resword = &wordlist[1099];
                goto compare;
              case 3892:
                resword = &wordlist[1100];
                goto compare;
              case 3897:
                resword = &wordlist[1101];
                goto compare;
              case 3898:
                resword = &wordlist[1102];
                goto compare;
              case 3899:
                resword = &wordlist[1103];
                goto compare;
              case 3900:
                resword = &wordlist[1104];
                goto compare;
              case 3904:
                resword = &wordlist[1105];
                goto compare;
              case 3905:
                resword = &wordlist[1106];
                goto compare;
              case 3907:
                resword = &wordlist[1107];
                goto compare;
              case 3910:
                resword = &wordlist[1108];
                goto compare;
              case 3912:
                resword = &wordlist[1109];
                goto compare;
              case 3913:
                resword = &wordlist[1110];
                goto compare;
              case 3919:
                resword = &wordlist[1111];
                goto compare;
              case 3920:
                resword = &wordlist[1112];
                goto compare;
              case 3923:
                resword = &wordlist[1113];
                goto compare;
              case 3925:
                resword = &wordlist[1114];
                goto compare;
              case 3928:
                resword = &wordlist[1115];
                goto compare;
              case 3930:
                resword = &wordlist[1116];
                goto compare;
              case 3937:
                resword = &wordlist[1117];
                goto compare;
              case 3938:
                resword = &wordlist[1118];
                goto compare;
              case 3942:
                resword = &wordlist[1119];
                goto compare;
              case 3943:
                resword = &wordlist[1120];
                goto compare;
              case 3945:
                resword = &wordlist[1121];
                goto compare;
              case 3947:
                resword = &wordlist[1122];
                goto compare;
              case 3948:
                resword = &wordlist[1123];
                goto compare;
              case 3951:
                resword = &wordlist[1124];
                goto compare;
              case 3957:
                resword = &wordlist[1125];
                goto compare;
              case 3958:
                resword = &wordlist[1126];
                goto compare;
              case 3962:
                resword = &wordlist[1127];
                goto compare;
              case 3972:
                resword = &wordlist[1128];
                goto compare;
              case 3973:
                resword = &wordlist[1129];
                goto compare;
              case 3975:
                resword = &wordlist[1130];
                goto compare;
              case 3979:
                resword = &wordlist[1131];
                goto compare;
              case 3981:
                resword = &wordlist[1132];
                goto compare;
              case 3982:
                resword = &wordlist[1133];
                goto compare;
              case 3985:
                resword = &wordlist[1134];
                goto compare;
              case 3990:
                resword = &wordlist[1135];
                goto compare;
              case 3993:
                resword = &wordlist[1136];
                goto compare;
              case 3995:
                resword = &wordlist[1137];
                goto compare;
              case 3996:
                resword = &wordlist[1138];
                goto compare;
              case 3997:
                resword = &wordlist[1139];
                goto compare;
              case 4001:
                resword = &wordlist[1140];
                goto compare;
              case 4002:
                resword = &wordlist[1141];
                goto compare;
              case 4003:
                resword = &wordlist[1142];
                goto compare;
              case 4004:
                resword = &wordlist[1143];
                goto compare;
              case 4005:
                resword = &wordlist[1144];
                goto compare;
              case 4011:
                resword = &wordlist[1145];
                goto compare;
              case 4015:
                resword = &wordlist[1146];
                goto compare;
              case 4018:
                resword = &wordlist[1147];
                goto compare;
              case 4022:
                resword = &wordlist[1148];
                goto compare;
              case 4023:
                resword = &wordlist[1149];
                goto compare;
              case 4024:
                resword = &wordlist[1150];
                goto compare;
              case 4030:
                resword = &wordlist[1151];
                goto compare;
              case 4031:
                resword = &wordlist[1152];
                goto compare;
              case 4037:
                resword = &wordlist[1153];
                goto compare;
              case 4038:
                resword = &wordlist[1154];
                goto compare;
              case 4039:
                resword = &wordlist[1155];
                goto compare;
              case 4043:
                resword = &wordlist[1156];
                goto compare;
              case 4044:
                resword = &wordlist[1157];
                goto compare;
              case 4046:
                resword = &wordlist[1158];
                goto compare;
              case 4048:
                resword = &wordlist[1159];
                goto compare;
              case 4049:
                resword = &wordlist[1160];
                goto compare;
              case 4052:
                resword = &wordlist[1161];
                goto compare;
              case 4058:
                resword = &wordlist[1162];
                goto compare;
              case 4064:
                resword = &wordlist[1163];
                goto compare;
              case 4065:
                resword = &wordlist[1164];
                goto compare;
              case 4068:
                resword = &wordlist[1165];
                goto compare;
              case 4075:
                resword = &wordlist[1166];
                goto compare;
              case 4078:
                resword = &wordlist[1167];
                goto compare;
              case 4079:
                resword = &wordlist[1168];
                goto compare;
              case 4088:
                resword = &wordlist[1169];
                goto compare;
              case 4094:
                resword = &wordlist[1170];
                goto compare;
              case 4096:
                resword = &wordlist[1171];
                goto compare;
              case 4097:
                resword = &wordlist[1172];
                goto compare;
              case 4098:
                resword = &wordlist[1173];
                goto compare;
              case 4100:
                resword = &wordlist[1174];
                goto compare;
              case 4103:
                resword = &wordlist[1175];
                goto compare;
              case 4110:
                resword = &wordlist[1176];
                goto compare;
              case 4119:
                resword = &wordlist[1177];
                goto compare;
              case 4123:
                resword = &wordlist[1178];
                goto compare;
              case 4127:
                resword = &wordlist[1179];
                goto compare;
              case 4129:
                resword = &wordlist[1180];
                goto compare;
              case 4130:
                resword = &wordlist[1181];
                goto compare;
              case 4136:
                resword = &wordlist[1182];
                goto compare;
              case 4137:
                resword = &wordlist[1183];
                goto compare;
              case 4155:
                resword = &wordlist[1184];
                goto compare;
              case 4157:
                resword = &wordlist[1185];
                goto compare;
              case 4159:
                resword = &wordlist[1186];
                goto compare;
              case 4162:
                resword = &wordlist[1187];
                goto compare;
              case 4167:
                resword = &wordlist[1188];
                goto compare;
              case 4168:
                resword = &wordlist[1189];
                goto compare;
              case 4169:
                resword = &wordlist[1190];
                goto compare;
              case 4170:
                resword = &wordlist[1191];
                goto compare;
              case 4178:
                resword = &wordlist[1192];
                goto compare;
              case 4180:
                resword = &wordlist[1193];
                goto compare;
              case 4182:
                resword = &wordlist[1194];
                goto compare;
              case 4185:
                resword = &wordlist[1195];
                goto compare;
              case 4188:
                resword = &wordlist[1196];
                goto compare;
              case 4190:
                resword = &wordlist[1197];
                goto compare;
              case 4192:
                resword = &wordlist[1198];
                goto compare;
              case 4195:
                resword = &wordlist[1199];
                goto compare;
              case 4198:
                resword = &wordlist[1200];
                goto compare;
              case 4203:
                resword = &wordlist[1201];
                goto compare;
              case 4204:
                resword = &wordlist[1202];
                goto compare;
              case 4207:
                resword = &wordlist[1203];
                goto compare;
              case 4208:
                resword = &wordlist[1204];
                goto compare;
              case 4210:
                resword = &wordlist[1205];
                goto compare;
              case 4213:
                resword = &wordlist[1206];
                goto compare;
              case 4215:
                resword = &wordlist[1207];
                goto compare;
              case 4216:
                resword = &wordlist[1208];
                goto compare;
              case 4222:
                resword = &wordlist[1209];
                goto compare;
              case 4227:
                resword = &wordlist[1210];
                goto compare;
              case 4228:
                resword = &wordlist[1211];
                goto compare;
              case 4229:
                resword = &wordlist[1212];
                goto compare;
              case 4231:
                resword = &wordlist[1213];
                goto compare;
              case 4232:
                resword = &wordlist[1214];
                goto compare;
              case 4239:
                resword = &wordlist[1215];
                goto compare;
              case 4248:
                resword = &wordlist[1216];
                goto compare;
              case 4252:
                resword = &wordlist[1217];
                goto compare;
              case 4255:
                resword = &wordlist[1218];
                goto compare;
              case 4256:
                resword = &wordlist[1219];
                goto compare;
              case 4257:
                resword = &wordlist[1220];
                goto compare;
              case 4263:
                resword = &wordlist[1221];
                goto compare;
              case 4268:
                resword = &wordlist[1222];
                goto compare;
              case 4287:
                resword = &wordlist[1223];
                goto compare;
              case 4288:
                resword = &wordlist[1224];
                goto compare;
              case 4289:
                resword = &wordlist[1225];
                goto compare;
              case 4293:
                resword = &wordlist[1226];
                goto compare;
              case 4294:
                resword = &wordlist[1227];
                goto compare;
              case 4295:
                resword = &wordlist[1228];
                goto compare;
              case 4298:
                resword = &wordlist[1229];
                goto compare;
              case 4305:
                resword = &wordlist[1230];
                goto compare;
              case 4308:
                resword = &wordlist[1231];
                goto compare;
              case 4310:
                resword = &wordlist[1232];
                goto compare;
              case 4313:
                resword = &wordlist[1233];
                goto compare;
              case 4318:
                resword = &wordlist[1234];
                goto compare;
              case 4324:
                resword = &wordlist[1235];
                goto compare;
              case 4328:
                resword = &wordlist[1236];
                goto compare;
              case 4330:
                resword = &wordlist[1237];
                goto compare;
              case 4334:
                resword = &wordlist[1238];
                goto compare;
              case 4339:
                resword = &wordlist[1239];
                goto compare;
              case 4342:
                resword = &wordlist[1240];
                goto compare;
              case 4344:
                resword = &wordlist[1241];
                goto compare;
              case 4345:
                resword = &wordlist[1242];
                goto compare;
              case 4346:
                resword = &wordlist[1243];
                goto compare;
              case 4347:
                resword = &wordlist[1244];
                goto compare;
              case 4349:
                resword = &wordlist[1245];
                goto compare;
              case 4355:
                resword = &wordlist[1246];
                goto compare;
              case 4358:
                resword = &wordlist[1247];
                goto compare;
              case 4371:
                resword = &wordlist[1248];
                goto compare;
              case 4375:
                resword = &wordlist[1249];
                goto compare;
              case 4376:
                resword = &wordlist[1250];
                goto compare;
              case 4383:
                resword = &wordlist[1251];
                goto compare;
              case 4385:
                resword = &wordlist[1252];
                goto compare;
              case 4388:
                resword = &wordlist[1253];
                goto compare;
              case 4391:
                resword = &wordlist[1254];
                goto compare;
              case 4393:
                resword = &wordlist[1255];
                goto compare;
              case 4395:
                resword = &wordlist[1256];
                goto compare;
              case 4397:
                resword = &wordlist[1257];
                goto compare;
              case 4403:
                resword = &wordlist[1258];
                goto compare;
              case 4405:
                resword = &wordlist[1259];
                goto compare;
              case 4408:
                resword = &wordlist[1260];
                goto compare;
              case 4414:
                resword = &wordlist[1261];
                goto compare;
              case 4422:
                resword = &wordlist[1262];
                goto compare;
              case 4424:
                resword = &wordlist[1263];
                goto compare;
              case 4426:
                resword = &wordlist[1264];
                goto compare;
              case 4428:
                resword = &wordlist[1265];
                goto compare;
              case 4437:
                resword = &wordlist[1266];
                goto compare;
              case 4440:
                resword = &wordlist[1267];
                goto compare;
              case 4450:
                resword = &wordlist[1268];
                goto compare;
              case 4451:
                resword = &wordlist[1269];
                goto compare;
              case 4459:
                resword = &wordlist[1270];
                goto compare;
              case 4461:
                resword = &wordlist[1271];
                goto compare;
              case 4468:
                resword = &wordlist[1272];
                goto compare;
              case 4469:
                resword = &wordlist[1273];
                goto compare;
              case 4471:
                resword = &wordlist[1274];
                goto compare;
              case 4473:
                resword = &wordlist[1275];
                goto compare;
              case 4474:
                resword = &wordlist[1276];
                goto compare;
              case 4479:
                resword = &wordlist[1277];
                goto compare;
              case 4482:
                resword = &wordlist[1278];
                goto compare;
              case 4487:
                resword = &wordlist[1279];
                goto compare;
              case 4489:
                resword = &wordlist[1280];
                goto compare;
              case 4503:
                resword = &wordlist[1281];
                goto compare;
              case 4509:
                resword = &wordlist[1282];
                goto compare;
              case 4512:
                resword = &wordlist[1283];
                goto compare;
              case 4513:
                resword = &wordlist[1284];
                goto compare;
              case 4516:
                resword = &wordlist[1285];
                goto compare;
              case 4519:
                resword = &wordlist[1286];
                goto compare;
              case 4524:
                resword = &wordlist[1287];
                goto compare;
              case 4525:
                resword = &wordlist[1288];
                goto compare;
              case 4527:
                resword = &wordlist[1289];
                goto compare;
              case 4530:
                resword = &wordlist[1290];
                goto compare;
              case 4532:
                resword = &wordlist[1291];
                goto compare;
              case 4535:
                resword = &wordlist[1292];
                goto compare;
              case 4539:
                resword = &wordlist[1293];
                goto compare;
              case 4542:
                resword = &wordlist[1294];
                goto compare;
              case 4549:
                resword = &wordlist[1295];
                goto compare;
              case 4553:
                resword = &wordlist[1296];
                goto compare;
              case 4555:
                resword = &wordlist[1297];
                goto compare;
              case 4557:
                resword = &wordlist[1298];
                goto compare;
              case 4558:
                resword = &wordlist[1299];
                goto compare;
              case 4559:
                resword = &wordlist[1300];
                goto compare;
              case 4562:
                resword = &wordlist[1301];
                goto compare;
              case 4565:
                resword = &wordlist[1302];
                goto compare;
              case 4567:
                resword = &wordlist[1303];
                goto compare;
              case 4569:
                resword = &wordlist[1304];
                goto compare;
              case 4572:
                resword = &wordlist[1305];
                goto compare;
              case 4573:
                resword = &wordlist[1306];
                goto compare;
              case 4578:
                resword = &wordlist[1307];
                goto compare;
              case 4582:
                resword = &wordlist[1308];
                goto compare;
              case 4583:
                resword = &wordlist[1309];
                goto compare;
              case 4584:
                resword = &wordlist[1310];
                goto compare;
              case 4587:
                resword = &wordlist[1311];
                goto compare;
              case 4590:
                resword = &wordlist[1312];
                goto compare;
              case 4592:
                resword = &wordlist[1313];
                goto compare;
              case 4593:
                resword = &wordlist[1314];
                goto compare;
              case 4595:
                resword = &wordlist[1315];
                goto compare;
              case 4599:
                resword = &wordlist[1316];
                goto compare;
              case 4600:
                resword = &wordlist[1317];
                goto compare;
              case 4605:
                resword = &wordlist[1318];
                goto compare;
              case 4609:
                resword = &wordlist[1319];
                goto compare;
              case 4610:
                resword = &wordlist[1320];
                goto compare;
              case 4619:
                resword = &wordlist[1321];
                goto compare;
              case 4620:
                resword = &wordlist[1322];
                goto compare;
              case 4633:
                resword = &wordlist[1323];
                goto compare;
              case 4637:
                resword = &wordlist[1324];
                goto compare;
              case 4642:
                resword = &wordlist[1325];
                goto compare;
              case 4643:
                resword = &wordlist[1326];
                goto compare;
              case 4644:
                resword = &wordlist[1327];
                goto compare;
              case 4647:
                resword = &wordlist[1328];
                goto compare;
              case 4654:
                resword = &wordlist[1329];
                goto compare;
              case 4658:
                resword = &wordlist[1330];
                goto compare;
              case 4664:
                resword = &wordlist[1331];
                goto compare;
              case 4668:
                resword = &wordlist[1332];
                goto compare;
              case 4669:
                resword = &wordlist[1333];
                goto compare;
              case 4677:
                resword = &wordlist[1334];
                goto compare;
              case 4682:
                resword = &wordlist[1335];
                goto compare;
              case 4684:
                resword = &wordlist[1336];
                goto compare;
              case 4685:
                resword = &wordlist[1337];
                goto compare;
              case 4688:
                resword = &wordlist[1338];
                goto compare;
              case 4696:
                resword = &wordlist[1339];
                goto compare;
              case 4698:
                resword = &wordlist[1340];
                goto compare;
              case 4703:
                resword = &wordlist[1341];
                goto compare;
              case 4706:
                resword = &wordlist[1342];
                goto compare;
              case 4708:
                resword = &wordlist[1343];
                goto compare;
              case 4710:
                resword = &wordlist[1344];
                goto compare;
              case 4713:
                resword = &wordlist[1345];
                goto compare;
              case 4714:
                resword = &wordlist[1346];
                goto compare;
              case 4715:
                resword = &wordlist[1347];
                goto compare;
              case 4718:
                resword = &wordlist[1348];
                goto compare;
              case 4725:
                resword = &wordlist[1349];
                goto compare;
              case 4727:
                resword = &wordlist[1350];
                goto compare;
              case 4728:
                resword = &wordlist[1351];
                goto compare;
              case 4729:
                resword = &wordlist[1352];
                goto compare;
              case 4731:
                resword = &wordlist[1353];
                goto compare;
              case 4732:
                resword = &wordlist[1354];
                goto compare;
              case 4739:
                resword = &wordlist[1355];
                goto compare;
              case 4741:
                resword = &wordlist[1356];
                goto compare;
              case 4748:
                resword = &wordlist[1357];
                goto compare;
              case 4749:
                resword = &wordlist[1358];
                goto compare;
              case 4752:
                resword = &wordlist[1359];
                goto compare;
              case 4754:
                resword = &wordlist[1360];
                goto compare;
              case 4764:
                resword = &wordlist[1361];
                goto compare;
              case 4768:
                resword = &wordlist[1362];
                goto compare;
              case 4770:
                resword = &wordlist[1363];
                goto compare;
              case 4772:
                resword = &wordlist[1364];
                goto compare;
              case 4773:
                resword = &wordlist[1365];
                goto compare;
              case 4776:
                resword = &wordlist[1366];
                goto compare;
              case 4778:
                resword = &wordlist[1367];
                goto compare;
              case 4786:
                resword = &wordlist[1368];
                goto compare;
              case 4787:
                resword = &wordlist[1369];
                goto compare;
              case 4789:
                resword = &wordlist[1370];
                goto compare;
              case 4790:
                resword = &wordlist[1371];
                goto compare;
              case 4794:
                resword = &wordlist[1372];
                goto compare;
              case 4795:
                resword = &wordlist[1373];
                goto compare;
              case 4798:
                resword = &wordlist[1374];
                goto compare;
              case 4799:
                resword = &wordlist[1375];
                goto compare;
              case 4804:
                resword = &wordlist[1376];
                goto compare;
              case 4805:
                resword = &wordlist[1377];
                goto compare;
              case 4806:
                resword = &wordlist[1378];
                goto compare;
              case 4807:
                resword = &wordlist[1379];
                goto compare;
              case 4808:
                resword = &wordlist[1380];
                goto compare;
              case 4809:
                resword = &wordlist[1381];
                goto compare;
              case 4810:
                resword = &wordlist[1382];
                goto compare;
              case 4814:
                resword = &wordlist[1383];
                goto compare;
              case 4817:
                resword = &wordlist[1384];
                goto compare;
              case 4819:
                resword = &wordlist[1385];
                goto compare;
              case 4820:
                resword = &wordlist[1386];
                goto compare;
              case 4826:
                resword = &wordlist[1387];
                goto compare;
              case 4832:
                resword = &wordlist[1388];
                goto compare;
              case 4834:
                resword = &wordlist[1389];
                goto compare;
              case 4839:
                resword = &wordlist[1390];
                goto compare;
              case 4840:
                resword = &wordlist[1391];
                goto compare;
              case 4842:
                resword = &wordlist[1392];
                goto compare;
              case 4854:
                resword = &wordlist[1393];
                goto compare;
              case 4862:
                resword = &wordlist[1394];
                goto compare;
              case 4880:
                resword = &wordlist[1395];
                goto compare;
              case 4888:
                resword = &wordlist[1396];
                goto compare;
              case 4890:
                resword = &wordlist[1397];
                goto compare;
              case 4891:
                resword = &wordlist[1398];
                goto compare;
              case 4894:
                resword = &wordlist[1399];
                goto compare;
              case 4896:
                resword = &wordlist[1400];
                goto compare;
              case 4897:
                resword = &wordlist[1401];
                goto compare;
              case 4898:
                resword = &wordlist[1402];
                goto compare;
              case 4899:
                resword = &wordlist[1403];
                goto compare;
              case 4908:
                resword = &wordlist[1404];
                goto compare;
              case 4909:
                resword = &wordlist[1405];
                goto compare;
              case 4913:
                resword = &wordlist[1406];
                goto compare;
              case 4920:
                resword = &wordlist[1407];
                goto compare;
              case 4930:
                resword = &wordlist[1408];
                goto compare;
              case 4932:
                resword = &wordlist[1409];
                goto compare;
              case 4933:
                resword = &wordlist[1410];
                goto compare;
              case 4944:
                resword = &wordlist[1411];
                goto compare;
              case 4946:
                resword = &wordlist[1412];
                goto compare;
              case 4948:
                resword = &wordlist[1413];
                goto compare;
              case 4949:
                resword = &wordlist[1414];
                goto compare;
              case 4950:
                resword = &wordlist[1415];
                goto compare;
              case 4953:
                resword = &wordlist[1416];
                goto compare;
              case 4954:
                resword = &wordlist[1417];
                goto compare;
              case 4958:
                resword = &wordlist[1418];
                goto compare;
              case 4960:
                resword = &wordlist[1419];
                goto compare;
              case 4969:
                resword = &wordlist[1420];
                goto compare;
              case 4971:
                resword = &wordlist[1421];
                goto compare;
              case 4975:
                resword = &wordlist[1422];
                goto compare;
              case 4993:
                resword = &wordlist[1423];
                goto compare;
              case 4995:
                resword = &wordlist[1424];
                goto compare;
              case 4999:
                resword = &wordlist[1425];
                goto compare;
              case 5002:
                resword = &wordlist[1426];
                goto compare;
              case 5004:
                resword = &wordlist[1427];
                goto compare;
              case 5005:
                resword = &wordlist[1428];
                goto compare;
              case 5012:
                resword = &wordlist[1429];
                goto compare;
              case 5018:
                resword = &wordlist[1430];
                goto compare;
              case 5019:
                resword = &wordlist[1431];
                goto compare;
              case 5020:
                resword = &wordlist[1432];
                goto compare;
              case 5021:
                resword = &wordlist[1433];
                goto compare;
              case 5023:
                resword = &wordlist[1434];
                goto compare;
              case 5024:
                resword = &wordlist[1435];
                goto compare;
              case 5025:
                resword = &wordlist[1436];
                goto compare;
              case 5028:
                resword = &wordlist[1437];
                goto compare;
              case 5030:
                resword = &wordlist[1438];
                goto compare;
              case 5031:
                resword = &wordlist[1439];
                goto compare;
              case 5033:
                resword = &wordlist[1440];
                goto compare;
              case 5036:
                resword = &wordlist[1441];
                goto compare;
              case 5037:
                resword = &wordlist[1442];
                goto compare;
              case 5052:
                resword = &wordlist[1443];
                goto compare;
              case 5053:
                resword = &wordlist[1444];
                goto compare;
              case 5058:
                resword = &wordlist[1445];
                goto compare;
              case 5059:
                resword = &wordlist[1446];
                goto compare;
              case 5061:
                resword = &wordlist[1447];
                goto compare;
              case 5064:
                resword = &wordlist[1448];
                goto compare;
              case 5069:
                resword = &wordlist[1449];
                goto compare;
              case 5070:
                resword = &wordlist[1450];
                goto compare;
              case 5074:
                resword = &wordlist[1451];
                goto compare;
              case 5080:
                resword = &wordlist[1452];
                goto compare;
              case 5091:
                resword = &wordlist[1453];
                goto compare;
              case 5093:
                resword = &wordlist[1454];
                goto compare;
              case 5094:
                resword = &wordlist[1455];
                goto compare;
              case 5098:
                resword = &wordlist[1456];
                goto compare;
              case 5109:
                resword = &wordlist[1457];
                goto compare;
              case 5118:
                resword = &wordlist[1458];
                goto compare;
              case 5119:
                resword = &wordlist[1459];
                goto compare;
              case 5123:
                resword = &wordlist[1460];
                goto compare;
              case 5125:
                resword = &wordlist[1461];
                goto compare;
              case 5126:
                resword = &wordlist[1462];
                goto compare;
              case 5128:
                resword = &wordlist[1463];
                goto compare;
              case 5131:
                resword = &wordlist[1464];
                goto compare;
              case 5135:
                resword = &wordlist[1465];
                goto compare;
              case 5136:
                resword = &wordlist[1466];
                goto compare;
              case 5137:
                resword = &wordlist[1467];
                goto compare;
              case 5146:
                resword = &wordlist[1468];
                goto compare;
              case 5154:
                resword = &wordlist[1469];
                goto compare;
              case 5162:
                resword = &wordlist[1470];
                goto compare;
              case 5163:
                resword = &wordlist[1471];
                goto compare;
              case 5164:
                resword = &wordlist[1472];
                goto compare;
              case 5165:
                resword = &wordlist[1473];
                goto compare;
              case 5167:
                resword = &wordlist[1474];
                goto compare;
              case 5169:
                resword = &wordlist[1475];
                goto compare;
              case 5175:
                resword = &wordlist[1476];
                goto compare;
              case 5179:
                resword = &wordlist[1477];
                goto compare;
              case 5180:
                resword = &wordlist[1478];
                goto compare;
              case 5183:
                resword = &wordlist[1479];
                goto compare;
              case 5190:
                resword = &wordlist[1480];
                goto compare;
              case 5192:
                resword = &wordlist[1481];
                goto compare;
              case 5194:
                resword = &wordlist[1482];
                goto compare;
              case 5196:
                resword = &wordlist[1483];
                goto compare;
              case 5198:
                resword = &wordlist[1484];
                goto compare;
              case 5199:
                resword = &wordlist[1485];
                goto compare;
              case 5200:
                resword = &wordlist[1486];
                goto compare;
              case 5202:
                resword = &wordlist[1487];
                goto compare;
              case 5205:
                resword = &wordlist[1488];
                goto compare;
              case 5207:
                resword = &wordlist[1489];
                goto compare;
              case 5212:
                resword = &wordlist[1490];
                goto compare;
              case 5214:
                resword = &wordlist[1491];
                goto compare;
              case 5216:
                resword = &wordlist[1492];
                goto compare;
              case 5222:
                resword = &wordlist[1493];
                goto compare;
              case 5223:
                resword = &wordlist[1494];
                goto compare;
              case 5230:
                resword = &wordlist[1495];
                goto compare;
              case 5235:
                resword = &wordlist[1496];
                goto compare;
              case 5239:
                resword = &wordlist[1497];
                goto compare;
              case 5249:
                resword = &wordlist[1498];
                goto compare;
              case 5254:
                resword = &wordlist[1499];
                goto compare;
              case 5259:
                resword = &wordlist[1500];
                goto compare;
              case 5268:
                resword = &wordlist[1501];
                goto compare;
              case 5272:
                resword = &wordlist[1502];
                goto compare;
              case 5273:
                resword = &wordlist[1503];
                goto compare;
              case 5276:
                resword = &wordlist[1504];
                goto compare;
              case 5283:
                resword = &wordlist[1505];
                goto compare;
              case 5284:
                resword = &wordlist[1506];
                goto compare;
              case 5286:
                resword = &wordlist[1507];
                goto compare;
              case 5291:
                resword = &wordlist[1508];
                goto compare;
              case 5293:
                resword = &wordlist[1509];
                goto compare;
              case 5296:
                resword = &wordlist[1510];
                goto compare;
              case 5303:
                resword = &wordlist[1511];
                goto compare;
              case 5308:
                resword = &wordlist[1512];
                goto compare;
              case 5309:
                resword = &wordlist[1513];
                goto compare;
              case 5317:
                resword = &wordlist[1514];
                goto compare;
              case 5318:
                resword = &wordlist[1515];
                goto compare;
              case 5320:
                resword = &wordlist[1516];
                goto compare;
              case 5324:
                resword = &wordlist[1517];
                goto compare;
              case 5327:
                resword = &wordlist[1518];
                goto compare;
              case 5328:
                resword = &wordlist[1519];
                goto compare;
              case 5333:
                resword = &wordlist[1520];
                goto compare;
              case 5334:
                resword = &wordlist[1521];
                goto compare;
              case 5335:
                resword = &wordlist[1522];
                goto compare;
              case 5340:
                resword = &wordlist[1523];
                goto compare;
              case 5348:
                resword = &wordlist[1524];
                goto compare;
              case 5350:
                resword = &wordlist[1525];
                goto compare;
              case 5356:
                resword = &wordlist[1526];
                goto compare;
              case 5357:
                resword = &wordlist[1527];
                goto compare;
              case 5364:
                resword = &wordlist[1528];
                goto compare;
              case 5367:
                resword = &wordlist[1529];
                goto compare;
              case 5369:
                resword = &wordlist[1530];
                goto compare;
              case 5375:
                resword = &wordlist[1531];
                goto compare;
              case 5377:
                resword = &wordlist[1532];
                goto compare;
              case 5384:
                resword = &wordlist[1533];
                goto compare;
              case 5391:
                resword = &wordlist[1534];
                goto compare;
              case 5392:
                resword = &wordlist[1535];
                goto compare;
              case 5395:
                resword = &wordlist[1536];
                goto compare;
              case 5399:
                resword = &wordlist[1537];
                goto compare;
              case 5405:
                resword = &wordlist[1538];
                goto compare;
              case 5409:
                resword = &wordlist[1539];
                goto compare;
              case 5411:
                resword = &wordlist[1540];
                goto compare;
              case 5413:
                resword = &wordlist[1541];
                goto compare;
              case 5415:
                resword = &wordlist[1542];
                goto compare;
              case 5417:
                resword = &wordlist[1543];
                goto compare;
              case 5418:
                resword = &wordlist[1544];
                goto compare;
              case 5427:
                resword = &wordlist[1545];
                goto compare;
              case 5428:
                resword = &wordlist[1546];
                goto compare;
              case 5429:
                resword = &wordlist[1547];
                goto compare;
              case 5433:
                resword = &wordlist[1548];
                goto compare;
              case 5435:
                resword = &wordlist[1549];
                goto compare;
              case 5439:
                resword = &wordlist[1550];
                goto compare;
              case 5443:
                resword = &wordlist[1551];
                goto compare;
              case 5444:
                resword = &wordlist[1552];
                goto compare;
              case 5464:
                resword = &wordlist[1553];
                goto compare;
              case 5470:
                resword = &wordlist[1554];
                goto compare;
              case 5472:
                resword = &wordlist[1555];
                goto compare;
              case 5474:
                resword = &wordlist[1556];
                goto compare;
              case 5476:
                resword = &wordlist[1557];
                goto compare;
              case 5478:
                resword = &wordlist[1558];
                goto compare;
              case 5479:
                resword = &wordlist[1559];
                goto compare;
              case 5486:
                resword = &wordlist[1560];
                goto compare;
              case 5490:
                resword = &wordlist[1561];
                goto compare;
              case 5492:
                resword = &wordlist[1562];
                goto compare;
              case 5497:
                resword = &wordlist[1563];
                goto compare;
              case 5498:
                resword = &wordlist[1564];
                goto compare;
              case 5499:
                resword = &wordlist[1565];
                goto compare;
              case 5500:
                resword = &wordlist[1566];
                goto compare;
              case 5523:
                resword = &wordlist[1567];
                goto compare;
              case 5524:
                resword = &wordlist[1568];
                goto compare;
              case 5529:
                resword = &wordlist[1569];
                goto compare;
              case 5533:
                resword = &wordlist[1570];
                goto compare;
              case 5534:
                resword = &wordlist[1571];
                goto compare;
              case 5535:
                resword = &wordlist[1572];
                goto compare;
              case 5551:
                resword = &wordlist[1573];
                goto compare;
              case 5553:
                resword = &wordlist[1574];
                goto compare;
              case 5559:
                resword = &wordlist[1575];
                goto compare;
              case 5560:
                resword = &wordlist[1576];
                goto compare;
              case 5562:
                resword = &wordlist[1577];
                goto compare;
              case 5563:
                resword = &wordlist[1578];
                goto compare;
              case 5564:
                resword = &wordlist[1579];
                goto compare;
              case 5568:
                resword = &wordlist[1580];
                goto compare;
              case 5569:
                resword = &wordlist[1581];
                goto compare;
              case 5570:
                resword = &wordlist[1582];
                goto compare;
              case 5580:
                resword = &wordlist[1583];
                goto compare;
              case 5587:
                resword = &wordlist[1584];
                goto compare;
              case 5593:
                resword = &wordlist[1585];
                goto compare;
              case 5594:
                resword = &wordlist[1586];
                goto compare;
              case 5595:
                resword = &wordlist[1587];
                goto compare;
              case 5600:
                resword = &wordlist[1588];
                goto compare;
              case 5601:
                resword = &wordlist[1589];
                goto compare;
              case 5609:
                resword = &wordlist[1590];
                goto compare;
              case 5615:
                resword = &wordlist[1591];
                goto compare;
              case 5617:
                resword = &wordlist[1592];
                goto compare;
              case 5619:
                resword = &wordlist[1593];
                goto compare;
              case 5625:
                resword = &wordlist[1594];
                goto compare;
              case 5628:
                resword = &wordlist[1595];
                goto compare;
              case 5635:
                resword = &wordlist[1596];
                goto compare;
              case 5654:
                resword = &wordlist[1597];
                goto compare;
              case 5662:
                resword = &wordlist[1598];
                goto compare;
              case 5665:
                resword = &wordlist[1599];
                goto compare;
              case 5670:
                resword = &wordlist[1600];
                goto compare;
              case 5672:
                resword = &wordlist[1601];
                goto compare;
              case 5674:
                resword = &wordlist[1602];
                goto compare;
              case 5680:
                resword = &wordlist[1603];
                goto compare;
              case 5683:
                resword = &wordlist[1604];
                goto compare;
              case 5695:
                resword = &wordlist[1605];
                goto compare;
              case 5700:
                resword = &wordlist[1606];
                goto compare;
              case 5701:
                resword = &wordlist[1607];
                goto compare;
              case 5719:
                resword = &wordlist[1608];
                goto compare;
              case 5724:
                resword = &wordlist[1609];
                goto compare;
              case 5727:
                resword = &wordlist[1610];
                goto compare;
              case 5731:
                resword = &wordlist[1611];
                goto compare;
              case 5734:
                resword = &wordlist[1612];
                goto compare;
              case 5739:
                resword = &wordlist[1613];
                goto compare;
              case 5743:
                resword = &wordlist[1614];
                goto compare;
              case 5750:
                resword = &wordlist[1615];
                goto compare;
              case 5754:
                resword = &wordlist[1616];
                goto compare;
              case 5756:
                resword = &wordlist[1617];
                goto compare;
              case 5760:
                resword = &wordlist[1618];
                goto compare;
              case 5766:
                resword = &wordlist[1619];
                goto compare;
              case 5779:
                resword = &wordlist[1620];
                goto compare;
              case 5780:
                resword = &wordlist[1621];
                goto compare;
              case 5783:
                resword = &wordlist[1622];
                goto compare;
              case 5790:
                resword = &wordlist[1623];
                goto compare;
              case 5792:
                resword = &wordlist[1624];
                goto compare;
              case 5800:
                resword = &wordlist[1625];
                goto compare;
              case 5808:
                resword = &wordlist[1626];
                goto compare;
              case 5809:
                resword = &wordlist[1627];
                goto compare;
              case 5817:
                resword = &wordlist[1628];
                goto compare;
              case 5819:
                resword = &wordlist[1629];
                goto compare;
              case 5820:
                resword = &wordlist[1630];
                goto compare;
              case 5836:
                resword = &wordlist[1631];
                goto compare;
              case 5839:
                resword = &wordlist[1632];
                goto compare;
              case 5840:
                resword = &wordlist[1633];
                goto compare;
              case 5841:
                resword = &wordlist[1634];
                goto compare;
              case 5848:
                resword = &wordlist[1635];
                goto compare;
              case 5851:
                resword = &wordlist[1636];
                goto compare;
              case 5865:
                resword = &wordlist[1637];
                goto compare;
              case 5871:
                resword = &wordlist[1638];
                goto compare;
              case 5878:
                resword = &wordlist[1639];
                goto compare;
              case 5883:
                resword = &wordlist[1640];
                goto compare;
              case 5888:
                resword = &wordlist[1641];
                goto compare;
              case 5890:
                resword = &wordlist[1642];
                goto compare;
              case 5891:
                resword = &wordlist[1643];
                goto compare;
              case 5896:
                resword = &wordlist[1644];
                goto compare;
              case 5898:
                resword = &wordlist[1645];
                goto compare;
              case 5900:
                resword = &wordlist[1646];
                goto compare;
              case 5911:
                resword = &wordlist[1647];
                goto compare;
              case 5913:
                resword = &wordlist[1648];
                goto compare;
              case 5917:
                resword = &wordlist[1649];
                goto compare;
              case 5929:
                resword = &wordlist[1650];
                goto compare;
              case 5933:
                resword = &wordlist[1651];
                goto compare;
              case 5936:
                resword = &wordlist[1652];
                goto compare;
              case 5938:
                resword = &wordlist[1653];
                goto compare;
              case 5944:
                resword = &wordlist[1654];
                goto compare;
              case 5950:
                resword = &wordlist[1655];
                goto compare;
              case 5959:
                resword = &wordlist[1656];
                goto compare;
              case 5967:
                resword = &wordlist[1657];
                goto compare;
              case 5970:
                resword = &wordlist[1658];
                goto compare;
              case 5974:
                resword = &wordlist[1659];
                goto compare;
              case 5977:
                resword = &wordlist[1660];
                goto compare;
              case 5983:
                resword = &wordlist[1661];
                goto compare;
              case 5984:
                resword = &wordlist[1662];
                goto compare;
              case 5989:
                resword = &wordlist[1663];
                goto compare;
              case 5999:
                resword = &wordlist[1664];
                goto compare;
              case 6019:
                resword = &wordlist[1665];
                goto compare;
              case 6020:
                resword = &wordlist[1666];
                goto compare;
              case 6024:
                resword = &wordlist[1667];
                goto compare;
              case 6028:
                resword = &wordlist[1668];
                goto compare;
              case 6029:
                resword = &wordlist[1669];
                goto compare;
              case 6030:
                resword = &wordlist[1670];
                goto compare;
              case 6032:
                resword = &wordlist[1671];
                goto compare;
              case 6033:
                resword = &wordlist[1672];
                goto compare;
              case 6039:
                resword = &wordlist[1673];
                goto compare;
              case 6041:
                resword = &wordlist[1674];
                goto compare;
              case 6045:
                resword = &wordlist[1675];
                goto compare;
              case 6046:
                resword = &wordlist[1676];
                goto compare;
              case 6047:
                resword = &wordlist[1677];
                goto compare;
              case 6048:
                resword = &wordlist[1678];
                goto compare;
              case 6060:
                resword = &wordlist[1679];
                goto compare;
              case 6067:
                resword = &wordlist[1680];
                goto compare;
              case 6069:
                resword = &wordlist[1681];
                goto compare;
              case 6070:
                resword = &wordlist[1682];
                goto compare;
              case 6071:
                resword = &wordlist[1683];
                goto compare;
              case 6074:
                resword = &wordlist[1684];
                goto compare;
              case 6080:
                resword = &wordlist[1685];
                goto compare;
              case 6084:
                resword = &wordlist[1686];
                goto compare;
              case 6090:
                resword = &wordlist[1687];
                goto compare;
              case 6104:
                resword = &wordlist[1688];
                goto compare;
              case 6115:
                resword = &wordlist[1689];
                goto compare;
              case 6116:
                resword = &wordlist[1690];
                goto compare;
              case 6118:
                resword = &wordlist[1691];
                goto compare;
              case 6119:
                resword = &wordlist[1692];
                goto compare;
              case 6139:
                resword = &wordlist[1693];
                goto compare;
              case 6142:
                resword = &wordlist[1694];
                goto compare;
              case 6146:
                resword = &wordlist[1695];
                goto compare;
              case 6148:
                resword = &wordlist[1696];
                goto compare;
              case 6154:
                resword = &wordlist[1697];
                goto compare;
              case 6156:
                resword = &wordlist[1698];
                goto compare;
              case 6167:
                resword = &wordlist[1699];
                goto compare;
              case 6182:
                resword = &wordlist[1700];
                goto compare;
              case 6183:
                resword = &wordlist[1701];
                goto compare;
              case 6184:
                resword = &wordlist[1702];
                goto compare;
              case 6188:
                resword = &wordlist[1703];
                goto compare;
              case 6189:
                resword = &wordlist[1704];
                goto compare;
              case 6198:
                resword = &wordlist[1705];
                goto compare;
              case 6199:
                resword = &wordlist[1706];
                goto compare;
              case 6208:
                resword = &wordlist[1707];
                goto compare;
              case 6213:
                resword = &wordlist[1708];
                goto compare;
              case 6217:
                resword = &wordlist[1709];
                goto compare;
              case 6219:
                resword = &wordlist[1710];
                goto compare;
              case 6228:
                resword = &wordlist[1711];
                goto compare;
              case 6229:
                resword = &wordlist[1712];
                goto compare;
              case 6240:
                resword = &wordlist[1713];
                goto compare;
              case 6243:
                resword = &wordlist[1714];
                goto compare;
              case 6246:
                resword = &wordlist[1715];
                goto compare;
              case 6255:
                resword = &wordlist[1716];
                goto compare;
              case 6258:
                resword = &wordlist[1717];
                goto compare;
              case 6262:
                resword = &wordlist[1718];
                goto compare;
              case 6263:
                resword = &wordlist[1719];
                goto compare;
              case 6266:
                resword = &wordlist[1720];
                goto compare;
              case 6267:
                resword = &wordlist[1721];
                goto compare;
              case 6268:
                resword = &wordlist[1722];
                goto compare;
              case 6274:
                resword = &wordlist[1723];
                goto compare;
              case 6280:
                resword = &wordlist[1724];
                goto compare;
              case 6284:
                resword = &wordlist[1725];
                goto compare;
              case 6287:
                resword = &wordlist[1726];
                goto compare;
              case 6289:
                resword = &wordlist[1727];
                goto compare;
              case 6291:
                resword = &wordlist[1728];
                goto compare;
              case 6295:
                resword = &wordlist[1729];
                goto compare;
              case 6296:
                resword = &wordlist[1730];
                goto compare;
              case 6297:
                resword = &wordlist[1731];
                goto compare;
              case 6304:
                resword = &wordlist[1732];
                goto compare;
              case 6312:
                resword = &wordlist[1733];
                goto compare;
              case 6313:
                resword = &wordlist[1734];
                goto compare;
              case 6314:
                resword = &wordlist[1735];
                goto compare;
              case 6317:
                resword = &wordlist[1736];
                goto compare;
              case 6322:
                resword = &wordlist[1737];
                goto compare;
              case 6330:
                resword = &wordlist[1738];
                goto compare;
              case 6333:
                resword = &wordlist[1739];
                goto compare;
              case 6343:
                resword = &wordlist[1740];
                goto compare;
              case 6345:
                resword = &wordlist[1741];
                goto compare;
              case 6358:
                resword = &wordlist[1742];
                goto compare;
              case 6362:
                resword = &wordlist[1743];
                goto compare;
              case 6363:
                resword = &wordlist[1744];
                goto compare;
              case 6372:
                resword = &wordlist[1745];
                goto compare;
              case 6378:
                resword = &wordlist[1746];
                goto compare;
              case 6381:
                resword = &wordlist[1747];
                goto compare;
              case 6386:
                resword = &wordlist[1748];
                goto compare;
              case 6388:
                resword = &wordlist[1749];
                goto compare;
              case 6389:
                resword = &wordlist[1750];
                goto compare;
              case 6390:
                resword = &wordlist[1751];
                goto compare;
              case 6392:
                resword = &wordlist[1752];
                goto compare;
              case 6393:
                resword = &wordlist[1753];
                goto compare;
              case 6395:
                resword = &wordlist[1754];
                goto compare;
              case 6420:
                resword = &wordlist[1755];
                goto compare;
              case 6435:
                resword = &wordlist[1756];
                goto compare;
              case 6436:
                resword = &wordlist[1757];
                goto compare;
              case 6437:
                resword = &wordlist[1758];
                goto compare;
              case 6440:
                resword = &wordlist[1759];
                goto compare;
              case 6452:
                resword = &wordlist[1760];
                goto compare;
              case 6455:
                resword = &wordlist[1761];
                goto compare;
              case 6460:
                resword = &wordlist[1762];
                goto compare;
              case 6462:
                resword = &wordlist[1763];
                goto compare;
              case 6471:
                resword = &wordlist[1764];
                goto compare;
              case 6475:
                resword = &wordlist[1765];
                goto compare;
              case 6477:
                resword = &wordlist[1766];
                goto compare;
              case 6478:
                resword = &wordlist[1767];
                goto compare;
              case 6479:
                resword = &wordlist[1768];
                goto compare;
              case 6493:
                resword = &wordlist[1769];
                goto compare;
              case 6495:
                resword = &wordlist[1770];
                goto compare;
              case 6501:
                resword = &wordlist[1771];
                goto compare;
              case 6513:
                resword = &wordlist[1772];
                goto compare;
              case 6516:
                resword = &wordlist[1773];
                goto compare;
              case 6519:
                resword = &wordlist[1774];
                goto compare;
              case 6529:
                resword = &wordlist[1775];
                goto compare;
              case 6530:
                resword = &wordlist[1776];
                goto compare;
              case 6531:
                resword = &wordlist[1777];
                goto compare;
              case 6542:
                resword = &wordlist[1778];
                goto compare;
              case 6543:
                resword = &wordlist[1779];
                goto compare;
              case 6550:
                resword = &wordlist[1780];
                goto compare;
              case 6553:
                resword = &wordlist[1781];
                goto compare;
              case 6588:
                resword = &wordlist[1782];
                goto compare;
              case 6600:
                resword = &wordlist[1783];
                goto compare;
              case 6605:
                resword = &wordlist[1784];
                goto compare;
              case 6608:
                resword = &wordlist[1785];
                goto compare;
              case 6610:
                resword = &wordlist[1786];
                goto compare;
              case 6612:
                resword = &wordlist[1787];
                goto compare;
              case 6617:
                resword = &wordlist[1788];
                goto compare;
              case 6646:
                resword = &wordlist[1789];
                goto compare;
              case 6650:
                resword = &wordlist[1790];
                goto compare;
              case 6663:
                resword = &wordlist[1791];
                goto compare;
              case 6665:
                resword = &wordlist[1792];
                goto compare;
              case 6668:
                resword = &wordlist[1793];
                goto compare;
              case 6675:
                resword = &wordlist[1794];
                goto compare;
              case 6679:
                resword = &wordlist[1795];
                goto compare;
              case 6699:
                resword = &wordlist[1796];
                goto compare;
              case 6703:
                resword = &wordlist[1797];
                goto compare;
              case 6705:
                resword = &wordlist[1798];
                goto compare;
              case 6708:
                resword = &wordlist[1799];
                goto compare;
              case 6710:
                resword = &wordlist[1800];
                goto compare;
              case 6716:
                resword = &wordlist[1801];
                goto compare;
              case 6719:
                resword = &wordlist[1802];
                goto compare;
              case 6724:
                resword = &wordlist[1803];
                goto compare;
              case 6725:
                resword = &wordlist[1804];
                goto compare;
              case 6731:
                resword = &wordlist[1805];
                goto compare;
              case 6736:
                resword = &wordlist[1806];
                goto compare;
              case 6737:
                resword = &wordlist[1807];
                goto compare;
              case 6738:
                resword = &wordlist[1808];
                goto compare;
              case 6739:
                resword = &wordlist[1809];
                goto compare;
              case 6749:
                resword = &wordlist[1810];
                goto compare;
              case 6751:
                resword = &wordlist[1811];
                goto compare;
              case 6756:
                resword = &wordlist[1812];
                goto compare;
              case 6763:
                resword = &wordlist[1813];
                goto compare;
              case 6775:
                resword = &wordlist[1814];
                goto compare;
              case 6778:
                resword = &wordlist[1815];
                goto compare;
              case 6780:
                resword = &wordlist[1816];
                goto compare;
              case 6782:
                resword = &wordlist[1817];
                goto compare;
              case 6784:
                resword = &wordlist[1818];
                goto compare;
              case 6785:
                resword = &wordlist[1819];
                goto compare;
              case 6791:
                resword = &wordlist[1820];
                goto compare;
              case 6793:
                resword = &wordlist[1821];
                goto compare;
              case 6796:
                resword = &wordlist[1822];
                goto compare;
              case 6797:
                resword = &wordlist[1823];
                goto compare;
              case 6801:
                resword = &wordlist[1824];
                goto compare;
              case 6807:
                resword = &wordlist[1825];
                goto compare;
              case 6815:
                resword = &wordlist[1826];
                goto compare;
              case 6821:
                resword = &wordlist[1827];
                goto compare;
              case 6825:
                resword = &wordlist[1828];
                goto compare;
              case 6827:
                resword = &wordlist[1829];
                goto compare;
              case 6828:
                resword = &wordlist[1830];
                goto compare;
              case 6834:
                resword = &wordlist[1831];
                goto compare;
              case 6849:
                resword = &wordlist[1832];
                goto compare;
              case 6855:
                resword = &wordlist[1833];
                goto compare;
              case 6861:
                resword = &wordlist[1834];
                goto compare;
              case 6868:
                resword = &wordlist[1835];
                goto compare;
              case 6869:
                resword = &wordlist[1836];
                goto compare;
              case 6870:
                resword = &wordlist[1837];
                goto compare;
              case 6877:
                resword = &wordlist[1838];
                goto compare;
              case 6881:
                resword = &wordlist[1839];
                goto compare;
              case 6896:
                resword = &wordlist[1840];
                goto compare;
              case 6904:
                resword = &wordlist[1841];
                goto compare;
              case 6906:
                resword = &wordlist[1842];
                goto compare;
              case 6908:
                resword = &wordlist[1843];
                goto compare;
              case 6910:
                resword = &wordlist[1844];
                goto compare;
              case 6916:
                resword = &wordlist[1845];
                goto compare;
              case 6936:
                resword = &wordlist[1846];
                goto compare;
              case 6947:
                resword = &wordlist[1847];
                goto compare;
              case 6954:
                resword = &wordlist[1848];
                goto compare;
              case 6955:
                resword = &wordlist[1849];
                goto compare;
              case 6957:
                resword = &wordlist[1850];
                goto compare;
              case 6960:
                resword = &wordlist[1851];
                goto compare;
              case 6970:
                resword = &wordlist[1852];
                goto compare;
              case 6978:
                resword = &wordlist[1853];
                goto compare;
              case 6984:
                resword = &wordlist[1854];
                goto compare;
              case 6986:
                resword = &wordlist[1855];
                goto compare;
              case 6989:
                resword = &wordlist[1856];
                goto compare;
              case 6994:
                resword = &wordlist[1857];
                goto compare;
              case 7000:
                resword = &wordlist[1858];
                goto compare;
              case 7001:
                resword = &wordlist[1859];
                goto compare;
              case 7005:
                resword = &wordlist[1860];
                goto compare;
              case 7020:
                resword = &wordlist[1861];
                goto compare;
              case 7038:
                resword = &wordlist[1862];
                goto compare;
              case 7043:
                resword = &wordlist[1863];
                goto compare;
              case 7044:
                resword = &wordlist[1864];
                goto compare;
              case 7045:
                resword = &wordlist[1865];
                goto compare;
              case 7051:
                resword = &wordlist[1866];
                goto compare;
              case 7062:
                resword = &wordlist[1867];
                goto compare;
              case 7064:
                resword = &wordlist[1868];
                goto compare;
              case 7078:
                resword = &wordlist[1869];
                goto compare;
              case 7089:
                resword = &wordlist[1870];
                goto compare;
              case 7091:
                resword = &wordlist[1871];
                goto compare;
              case 7100:
                resword = &wordlist[1872];
                goto compare;
              case 7111:
                resword = &wordlist[1873];
                goto compare;
              case 7115:
                resword = &wordlist[1874];
                goto compare;
              case 7116:
                resword = &wordlist[1875];
                goto compare;
              case 7129:
                resword = &wordlist[1876];
                goto compare;
              case 7148:
                resword = &wordlist[1877];
                goto compare;
              case 7162:
                resword = &wordlist[1878];
                goto compare;
              case 7165:
                resword = &wordlist[1879];
                goto compare;
              case 7173:
                resword = &wordlist[1880];
                goto compare;
              case 7188:
                resword = &wordlist[1881];
                goto compare;
              case 7191:
                resword = &wordlist[1882];
                goto compare;
              case 7194:
                resword = &wordlist[1883];
                goto compare;
              case 7206:
                resword = &wordlist[1884];
                goto compare;
              case 7207:
                resword = &wordlist[1885];
                goto compare;
              case 7211:
                resword = &wordlist[1886];
                goto compare;
              case 7216:
                resword = &wordlist[1887];
                goto compare;
              case 7217:
                resword = &wordlist[1888];
                goto compare;
              case 7220:
                resword = &wordlist[1889];
                goto compare;
              case 7221:
                resword = &wordlist[1890];
                goto compare;
              case 7225:
                resword = &wordlist[1891];
                goto compare;
              case 7232:
                resword = &wordlist[1892];
                goto compare;
              case 7238:
                resword = &wordlist[1893];
                goto compare;
              case 7255:
                resword = &wordlist[1894];
                goto compare;
              case 7265:
                resword = &wordlist[1895];
                goto compare;
              case 7269:
                resword = &wordlist[1896];
                goto compare;
              case 7271:
                resword = &wordlist[1897];
                goto compare;
              case 7289:
                resword = &wordlist[1898];
                goto compare;
              case 7294:
                resword = &wordlist[1899];
                goto compare;
              case 7295:
                resword = &wordlist[1900];
                goto compare;
              case 7304:
                resword = &wordlist[1901];
                goto compare;
              case 7314:
                resword = &wordlist[1902];
                goto compare;
              case 7316:
                resword = &wordlist[1903];
                goto compare;
              case 7332:
                resword = &wordlist[1904];
                goto compare;
              case 7335:
                resword = &wordlist[1905];
                goto compare;
              case 7336:
                resword = &wordlist[1906];
                goto compare;
              case 7358:
                resword = &wordlist[1907];
                goto compare;
              case 7365:
                resword = &wordlist[1908];
                goto compare;
              case 7368:
                resword = &wordlist[1909];
                goto compare;
              case 7369:
                resword = &wordlist[1910];
                goto compare;
              case 7380:
                resword = &wordlist[1911];
                goto compare;
              case 7395:
                resword = &wordlist[1912];
                goto compare;
              case 7396:
                resword = &wordlist[1913];
                goto compare;
              case 7398:
                resword = &wordlist[1914];
                goto compare;
              case 7401:
                resword = &wordlist[1915];
                goto compare;
              case 7402:
                resword = &wordlist[1916];
                goto compare;
              case 7403:
                resword = &wordlist[1917];
                goto compare;
              case 7405:
                resword = &wordlist[1918];
                goto compare;
              case 7409:
                resword = &wordlist[1919];
                goto compare;
              case 7410:
                resword = &wordlist[1920];
                goto compare;
              case 7412:
                resword = &wordlist[1921];
                goto compare;
              case 7443:
                resword = &wordlist[1922];
                goto compare;
              case 7446:
                resword = &wordlist[1923];
                goto compare;
              case 7468:
                resword = &wordlist[1924];
                goto compare;
              case 7479:
                resword = &wordlist[1925];
                goto compare;
              case 7480:
                resword = &wordlist[1926];
                goto compare;
              case 7500:
                resword = &wordlist[1927];
                goto compare;
              case 7513:
                resword = &wordlist[1928];
                goto compare;
              case 7514:
                resword = &wordlist[1929];
                goto compare;
              case 7520:
                resword = &wordlist[1930];
                goto compare;
              case 7528:
                resword = &wordlist[1931];
                goto compare;
              case 7531:
                resword = &wordlist[1932];
                goto compare;
              case 7535:
                resword = &wordlist[1933];
                goto compare;
              case 7541:
                resword = &wordlist[1934];
                goto compare;
              case 7552:
                resword = &wordlist[1935];
                goto compare;
              case 7553:
                resword = &wordlist[1936];
                goto compare;
              case 7560:
                resword = &wordlist[1937];
                goto compare;
              case 7565:
                resword = &wordlist[1938];
                goto compare;
              case 7571:
                resword = &wordlist[1939];
                goto compare;
              case 7572:
                resword = &wordlist[1940];
                goto compare;
              case 7575:
                resword = &wordlist[1941];
                goto compare;
              case 7576:
                resword = &wordlist[1942];
                goto compare;
              case 7583:
                resword = &wordlist[1943];
                goto compare;
              case 7586:
                resword = &wordlist[1944];
                goto compare;
              case 7593:
                resword = &wordlist[1945];
                goto compare;
              case 7600:
                resword = &wordlist[1946];
                goto compare;
              case 7602:
                resword = &wordlist[1947];
                goto compare;
              case 7612:
                resword = &wordlist[1948];
                goto compare;
              case 7633:
                resword = &wordlist[1949];
                goto compare;
              case 7650:
                resword = &wordlist[1950];
                goto compare;
              case 7651:
                resword = &wordlist[1951];
                goto compare;
              case 7667:
                resword = &wordlist[1952];
                goto compare;
              case 7682:
                resword = &wordlist[1953];
                goto compare;
              case 7683:
                resword = &wordlist[1954];
                goto compare;
              case 7692:
                resword = &wordlist[1955];
                goto compare;
              case 7695:
                resword = &wordlist[1956];
                goto compare;
              case 7698:
                resword = &wordlist[1957];
                goto compare;
              case 7720:
                resword = &wordlist[1958];
                goto compare;
              case 7723:
                resword = &wordlist[1959];
                goto compare;
              case 7724:
                resword = &wordlist[1960];
                goto compare;
              case 7735:
                resword = &wordlist[1961];
                goto compare;
              case 7739:
                resword = &wordlist[1962];
                goto compare;
              case 7774:
                resword = &wordlist[1963];
                goto compare;
              case 7775:
                resword = &wordlist[1964];
                goto compare;
              case 7805:
                resword = &wordlist[1965];
                goto compare;
              case 7809:
                resword = &wordlist[1966];
                goto compare;
              case 7813:
                resword = &wordlist[1967];
                goto compare;
              case 7834:
                resword = &wordlist[1968];
                goto compare;
              case 7845:
                resword = &wordlist[1969];
                goto compare;
              case 7865:
                resword = &wordlist[1970];
                goto compare;
              case 7867:
                resword = &wordlist[1971];
                goto compare;
              case 7873:
                resword = &wordlist[1972];
                goto compare;
              case 7904:
                resword = &wordlist[1973];
                goto compare;
              case 7905:
                resword = &wordlist[1974];
                goto compare;
              case 7914:
                resword = &wordlist[1975];
                goto compare;
              case 7934:
                resword = &wordlist[1976];
                goto compare;
              case 7959:
                resword = &wordlist[1977];
                goto compare;
              case 7960:
                resword = &wordlist[1978];
                goto compare;
              case 7975:
                resword = &wordlist[1979];
                goto compare;
              case 7977:
                resword = &wordlist[1980];
                goto compare;
              case 7992:
                resword = &wordlist[1981];
                goto compare;
              case 8006:
                resword = &wordlist[1982];
                goto compare;
              case 8009:
                resword = &wordlist[1983];
                goto compare;
              case 8010:
                resword = &wordlist[1984];
                goto compare;
              case 8011:
                resword = &wordlist[1985];
                goto compare;
              case 8013:
                resword = &wordlist[1986];
                goto compare;
              case 8028:
                resword = &wordlist[1987];
                goto compare;
              case 8029:
                resword = &wordlist[1988];
                goto compare;
              case 8039:
                resword = &wordlist[1989];
                goto compare;
              case 8047:
                resword = &wordlist[1990];
                goto compare;
              case 8054:
                resword = &wordlist[1991];
                goto compare;
              case 8055:
                resword = &wordlist[1992];
                goto compare;
              case 8063:
                resword = &wordlist[1993];
                goto compare;
              case 8068:
                resword = &wordlist[1994];
                goto compare;
              case 8073:
                resword = &wordlist[1995];
                goto compare;
              case 8077:
                resword = &wordlist[1996];
                goto compare;
              case 8083:
                resword = &wordlist[1997];
                goto compare;
              case 8085:
                resword = &wordlist[1998];
                goto compare;
              case 8116:
                resword = &wordlist[1999];
                goto compare;
              case 8120:
                resword = &wordlist[2000];
                goto compare;
              case 8124:
                resword = &wordlist[2001];
                goto compare;
              case 8130:
                resword = &wordlist[2002];
                goto compare;
              case 8143:
                resword = &wordlist[2003];
                goto compare;
              case 8149:
                resword = &wordlist[2004];
                goto compare;
              case 8150:
                resword = &wordlist[2005];
                goto compare;
              case 8159:
                resword = &wordlist[2006];
                goto compare;
              case 8173:
                resword = &wordlist[2007];
                goto compare;
              case 8186:
                resword = &wordlist[2008];
                goto compare;
              case 8193:
                resword = &wordlist[2009];
                goto compare;
              case 8209:
                resword = &wordlist[2010];
                goto compare;
              case 8212:
                resword = &wordlist[2011];
                goto compare;
              case 8215:
                resword = &wordlist[2012];
                goto compare;
              case 8221:
                resword = &wordlist[2013];
                goto compare;
              case 8223:
                resword = &wordlist[2014];
                goto compare;
              case 8230:
                resword = &wordlist[2015];
                goto compare;
              case 8231:
                resword = &wordlist[2016];
                goto compare;
              case 8257:
                resword = &wordlist[2017];
                goto compare;
              case 8258:
                resword = &wordlist[2018];
                goto compare;
              case 8259:
                resword = &wordlist[2019];
                goto compare;
              case 8287:
                resword = &wordlist[2020];
                goto compare;
              case 8295:
                resword = &wordlist[2021];
                goto compare;
              case 8296:
                resword = &wordlist[2022];
                goto compare;
              case 8309:
                resword = &wordlist[2023];
                goto compare;
              case 8310:
                resword = &wordlist[2024];
                goto compare;
              case 8316:
                resword = &wordlist[2025];
                goto compare;
              case 8335:
                resword = &wordlist[2026];
                goto compare;
              case 8342:
                resword = &wordlist[2027];
                goto compare;
              case 8354:
                resword = &wordlist[2028];
                goto compare;
              case 8362:
                resword = &wordlist[2029];
                goto compare;
              case 8367:
                resword = &wordlist[2030];
                goto compare;
              case 8375:
                resword = &wordlist[2031];
                goto compare;
              case 8379:
                resword = &wordlist[2032];
                goto compare;
              case 8382:
                resword = &wordlist[2033];
                goto compare;
              case 8390:
                resword = &wordlist[2034];
                goto compare;
              case 8391:
                resword = &wordlist[2035];
                goto compare;
              case 8402:
                resword = &wordlist[2036];
                goto compare;
              case 8406:
                resword = &wordlist[2037];
                goto compare;
              case 8418:
                resword = &wordlist[2038];
                goto compare;
              case 8425:
                resword = &wordlist[2039];
                goto compare;
              case 8436:
                resword = &wordlist[2040];
                goto compare;
              case 8439:
                resword = &wordlist[2041];
                goto compare;
              case 8448:
                resword = &wordlist[2042];
                goto compare;
              case 8459:
                resword = &wordlist[2043];
                goto compare;
              case 8461:
                resword = &wordlist[2044];
                goto compare;
              case 8462:
                resword = &wordlist[2045];
                goto compare;
              case 8463:
                resword = &wordlist[2046];
                goto compare;
              case 8464:
                resword = &wordlist[2047];
                goto compare;
              case 8477:
                resword = &wordlist[2048];
                goto compare;
              case 8491:
                resword = &wordlist[2049];
                goto compare;
              case 8492:
                resword = &wordlist[2050];
                goto compare;
              case 8495:
                resword = &wordlist[2051];
                goto compare;
              case 8515:
                resword = &wordlist[2052];
                goto compare;
              case 8526:
                resword = &wordlist[2053];
                goto compare;
              case 8533:
                resword = &wordlist[2054];
                goto compare;
              case 8534:
                resword = &wordlist[2055];
                goto compare;
              case 8535:
                resword = &wordlist[2056];
                goto compare;
              case 8540:
                resword = &wordlist[2057];
                goto compare;
              case 8541:
                resword = &wordlist[2058];
                goto compare;
              case 8553:
                resword = &wordlist[2059];
                goto compare;
              case 8565:
                resword = &wordlist[2060];
                goto compare;
              case 8590:
                resword = &wordlist[2061];
                goto compare;
              case 8605:
                resword = &wordlist[2062];
                goto compare;
              case 8610:
                resword = &wordlist[2063];
                goto compare;
              case 8615:
                resword = &wordlist[2064];
                goto compare;
              case 8651:
                resword = &wordlist[2065];
                goto compare;
              case 8661:
                resword = &wordlist[2066];
                goto compare;
              case 8671:
                resword = &wordlist[2067];
                goto compare;
              case 8683:
                resword = &wordlist[2068];
                goto compare;
              case 8689:
                resword = &wordlist[2069];
                goto compare;
              case 8694:
                resword = &wordlist[2070];
                goto compare;
              case 8710:
                resword = &wordlist[2071];
                goto compare;
              case 8721:
                resword = &wordlist[2072];
                goto compare;
              case 8733:
                resword = &wordlist[2073];
                goto compare;
              case 8736:
                resword = &wordlist[2074];
                goto compare;
              case 8739:
                resword = &wordlist[2075];
                goto compare;
              case 8746:
                resword = &wordlist[2076];
                goto compare;
              case 8754:
                resword = &wordlist[2077];
                goto compare;
              case 8810:
                resword = &wordlist[2078];
                goto compare;
              case 8829:
                resword = &wordlist[2079];
                goto compare;
              case 8840:
                resword = &wordlist[2080];
                goto compare;
              case 8848:
                resword = &wordlist[2081];
                goto compare;
              case 8865:
                resword = &wordlist[2082];
                goto compare;
              case 8878:
                resword = &wordlist[2083];
                goto compare;
              case 8886:
                resword = &wordlist[2084];
                goto compare;
              case 8890:
                resword = &wordlist[2085];
                goto compare;
              case 8891:
                resword = &wordlist[2086];
                goto compare;
              case 8902:
                resword = &wordlist[2087];
                goto compare;
              case 8928:
                resword = &wordlist[2088];
                goto compare;
              case 8965:
                resword = &wordlist[2089];
                goto compare;
              case 8987:
                resword = &wordlist[2090];
                goto compare;
              case 9042:
                resword = &wordlist[2091];
                goto compare;
              case 9047:
                resword = &wordlist[2092];
                goto compare;
              case 9068:
                resword = &wordlist[2093];
                goto compare;
              case 9088:
                resword = &wordlist[2094];
                goto compare;
              case 9089:
                resword = &wordlist[2095];
                goto compare;
              case 9120:
                resword = &wordlist[2096];
                goto compare;
              case 9153:
                resword = &wordlist[2097];
                goto compare;
              case 9168:
                resword = &wordlist[2098];
                goto compare;
              case 9185:
                resword = &wordlist[2099];
                goto compare;
              case 9202:
                resword = &wordlist[2100];
                goto compare;
              case 9208:
                resword = &wordlist[2101];
                goto compare;
              case 9210:
                resword = &wordlist[2102];
                goto compare;
              case 9228:
                resword = &wordlist[2103];
                goto compare;
              case 9253:
                resword = &wordlist[2104];
                goto compare;
              case 9255:
                resword = &wordlist[2105];
                goto compare;
              case 9267:
                resword = &wordlist[2106];
                goto compare;
              case 9289:
                resword = &wordlist[2107];
                goto compare;
              case 9305:
                resword = &wordlist[2108];
                goto compare;
              case 9321:
                resword = &wordlist[2109];
                goto compare;
              case 9345:
                resword = &wordlist[2110];
                goto compare;
              case 9369:
                resword = &wordlist[2111];
                goto compare;
              case 9371:
                resword = &wordlist[2112];
                goto compare;
              case 9399:
                resword = &wordlist[2113];
                goto compare;
              case 9406:
                resword = &wordlist[2114];
                goto compare;
              case 9420:
                resword = &wordlist[2115];
                goto compare;
              case 9435:
                resword = &wordlist[2116];
                goto compare;
              case 9491:
                resword = &wordlist[2117];
                goto compare;
              case 9512:
                resword = &wordlist[2118];
                goto compare;
              case 9527:
                resword = &wordlist[2119];
                goto compare;
              case 9529:
                resword = &wordlist[2120];
                goto compare;
              case 9547:
                resword = &wordlist[2121];
                goto compare;
              case 9559:
                resword = &wordlist[2122];
                goto compare;
              case 9590:
                resword = &wordlist[2123];
                goto compare;
              case 9591:
                resword = &wordlist[2124];
                goto compare;
              case 9593:
                resword = &wordlist[2125];
                goto compare;
              case 9621:
                resword = &wordlist[2126];
                goto compare;
              case 9641:
                resword = &wordlist[2127];
                goto compare;
              case 9688:
                resword = &wordlist[2128];
                goto compare;
              case 9708:
                resword = &wordlist[2129];
                goto compare;
              case 9742:
                resword = &wordlist[2130];
                goto compare;
              case 9750:
                resword = &wordlist[2131];
                goto compare;
              case 9887:
                resword = &wordlist[2132];
                goto compare;
              case 9892:
                resword = &wordlist[2133];
                goto compare;
              case 9907:
                resword = &wordlist[2134];
                goto compare;
              case 9924:
                resword = &wordlist[2135];
                goto compare;
              case 9944:
                resword = &wordlist[2136];
                goto compare;
              case 9995:
                resword = &wordlist[2137];
                goto compare;
              case 10006:
                resword = &wordlist[2138];
                goto compare;
              case 10020:
                resword = &wordlist[2139];
                goto compare;
              case 10040:
                resword = &wordlist[2140];
                goto compare;
              case 10050:
                resword = &wordlist[2141];
                goto compare;
              case 10060:
                resword = &wordlist[2142];
                goto compare;
              case 10082:
                resword = &wordlist[2143];
                goto compare;
              case 10100:
                resword = &wordlist[2144];
                goto compare;
              case 10103:
                resword = &wordlist[2145];
                goto compare;
              case 10105:
                resword = &wordlist[2146];
                goto compare;
              case 10147:
                resword = &wordlist[2147];
                goto compare;
              case 10148:
                resword = &wordlist[2148];
                goto compare;
              case 10151:
                resword = &wordlist[2149];
                goto compare;
              case 10171:
                resword = &wordlist[2150];
                goto compare;
              case 10172:
                resword = &wordlist[2151];
                goto compare;
              case 10175:
                resword = &wordlist[2152];
                goto compare;
              case 10203:
                resword = &wordlist[2153];
                goto compare;
              case 10224:
                resword = &wordlist[2154];
                goto compare;
              case 10227:
                resword = &wordlist[2155];
                goto compare;
              case 10231:
                resword = &wordlist[2156];
                goto compare;
              case 10240:
                resword = &wordlist[2157];
                goto compare;
              case 10256:
                resword = &wordlist[2158];
                goto compare;
              case 10261:
                resword = &wordlist[2159];
                goto compare;
              case 10285:
                resword = &wordlist[2160];
                goto compare;
              case 10294:
                resword = &wordlist[2161];
                goto compare;
              case 10352:
                resword = &wordlist[2162];
                goto compare;
              case 10379:
                resword = &wordlist[2163];
                goto compare;
              case 10420:
                resword = &wordlist[2164];
                goto compare;
              case 10495:
                resword = &wordlist[2165];
                goto compare;
              case 10511:
                resword = &wordlist[2166];
                goto compare;
              case 10529:
                resword = &wordlist[2167];
                goto compare;
              case 10534:
                resword = &wordlist[2168];
                goto compare;
              case 10545:
                resword = &wordlist[2169];
                goto compare;
              case 10561:
                resword = &wordlist[2170];
                goto compare;
              case 10582:
                resword = &wordlist[2171];
                goto compare;
              case 10604:
                resword = &wordlist[2172];
                goto compare;
              case 10622:
                resword = &wordlist[2173];
                goto compare;
              case 10628:
                resword = &wordlist[2174];
                goto compare;
              case 10643:
                resword = &wordlist[2175];
                goto compare;
              case 10659:
                resword = &wordlist[2176];
                goto compare;
              case 10717:
                resword = &wordlist[2177];
                goto compare;
              case 10719:
                resword = &wordlist[2178];
                goto compare;
              case 10796:
                resword = &wordlist[2179];
                goto compare;
              case 10820:
                resword = &wordlist[2180];
                goto compare;
              case 10826:
                resword = &wordlist[2181];
                goto compare;
              case 10844:
                resword = &wordlist[2182];
                goto compare;
              case 10869:
                resword = &wordlist[2183];
                goto compare;
              case 10881:
                resword = &wordlist[2184];
                goto compare;
              case 10887:
                resword = &wordlist[2185];
                goto compare;
              case 10914:
                resword = &wordlist[2186];
                goto compare;
              case 10916:
                resword = &wordlist[2187];
                goto compare;
              case 10965:
                resword = &wordlist[2188];
                goto compare;
              case 10971:
                resword = &wordlist[2189];
                goto compare;
              case 11006:
                resword = &wordlist[2190];
                goto compare;
              case 11015:
                resword = &wordlist[2191];
                goto compare;
              case 11051:
                resword = &wordlist[2192];
                goto compare;
              case 11062:
                resword = &wordlist[2193];
                goto compare;
              case 11115:
                resword = &wordlist[2194];
                goto compare;
              case 11222:
                resword = &wordlist[2195];
                goto compare;
              case 11238:
                resword = &wordlist[2196];
                goto compare;
              case 11363:
                resword = &wordlist[2197];
                goto compare;
              case 11423:
                resword = &wordlist[2198];
                goto compare;
              case 11448:
                resword = &wordlist[2199];
                goto compare;
              case 11455:
                resword = &wordlist[2200];
                goto compare;
              case 11570:
                resword = &wordlist[2201];
                goto compare;
              case 11658:
                resword = &wordlist[2202];
                goto compare;
              case 11778:
                resword = &wordlist[2203];
                goto compare;
              case 11835:
                resword = &wordlist[2204];
                goto compare;
              case 12008:
                resword = &wordlist[2205];
                goto compare;
              case 12028:
                resword = &wordlist[2206];
                goto compare;
              case 12122:
                resword = &wordlist[2207];
                goto compare;
              case 12420:
                resword = &wordlist[2208];
                goto compare;
              case 12473:
                resword = &wordlist[2209];
                goto compare;
              case 12499:
                resword = &wordlist[2210];
                goto compare;
              case 12716:
                resword = &wordlist[2211];
                goto compare;
              case 12864:
                resword = &wordlist[2212];
                goto compare;
              case 12943:
                resword = &wordlist[2213];
                goto compare;
              case 13014:
                resword = &wordlist[2214];
                goto compare;
              case 13017:
                resword = &wordlist[2215];
                goto compare;
              case 13090:
                resword = &wordlist[2216];
                goto compare;
              case 13230:
                resword = &wordlist[2217];
                goto compare;
              case 13317:
                resword = &wordlist[2218];
                goto compare;
              case 13342:
                resword = &wordlist[2219];
                goto compare;
              case 13452:
                resword = &wordlist[2220];
                goto compare;
              case 13610:
                resword = &wordlist[2221];
                goto compare;
              case 13789:
                resword = &wordlist[2222];
                goto compare;
              case 14052:
                resword = &wordlist[2223];
                goto compare;
              case 14265:
                resword = &wordlist[2224];
                goto compare;
              case 14433:
                resword = &wordlist[2225];
                goto compare;
              case 14506:
                resword = &wordlist[2226];
                goto compare;
              case 14747:
                resword = &wordlist[2227];
                goto compare;
              case 14767:
                resword = &wordlist[2228];
                goto compare;
              case 14880:
                resword = &wordlist[2229];
                goto compare;
              case 15333:
                resword = &wordlist[2230];
                goto compare;
              case 15509:
                resword = &wordlist[2231];
                goto compare;
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if (*str == *s && !strcmp (str + 1, s + 1))
              return resword;
          }
        }
    }
  return 0;
}
