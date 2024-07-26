#include<stdio.h>

int main() {
    int a;
    printf("enter any atomic no.: ");//(1-118)
    scanf("%d",&a);

    switch (a)
    {
    case 1:printf(" H\n hydrogen\n atomic mass:1.00784u\n electonic configuration:1s1\n melting point:13.99K\n boiling point:20.271k\n density:0.08988g/L\n oxidation states:-1,+1\n covalent radius:31+-5pm\n");
        break;
    case 2:printf("He\n helium\n atomic mass 4.002602u\n electonic configuration:1s2\n melting point:0.95k\n boiling point:4.222k\n density:0.1786g/L\n oxidation states:0\n covalent radius:28pm\n");
        break;
    case 3:printf("Li\n Lithum\n  atomic mass:6.941u\n electonic configuration:[he]2s1\n melting point:453.65k\n boiling point:1603k\n density:0.534g/L\n oxidation states:0 +1\n covalent radius:128+-7pm\n");
        break;
    case 4:printf("Be\n Beryllium\n  atomic mass:9.012182u\n electonic configuration:[He]2s2\n melting point:1560\n boiling point:2742k\n density:1.85g/L\n oxidation states:0,+1,+2\n covalent radius:96+-3pm\n");
        break;
    case 5:printf("B\n Boron\n atomic mass:10.811u\n electonic configuration:[he]2s2 2p1\n melting point:2349k\n boiling point:4200k\n density:2.08g/L\n oxidation states:-5,-1,0,+1.+2,+3\n covalent radius:84+-3pm\n");
        break;
    case 6:printf("C\n Carbon\n atomic mass:10.811u\n electonic configuration:[he]2s2 2p2\n melting point:2349k\n boiling point:4200k\n density:2.08g/L\n oxidation states:-4,-3,-2,-1,0,+1,+2,+3,+4\n covalent radius:sp3:77pm sp2:73pm sp:69pm\n");
        break;
    case 7:printf("N\n Nitrogen\n atomic mass:14.0067u\n electonic configuration:[he]2s2 2p3\n melting point:63.23K\n boiling point:77.355k\n density:1.2506g/L\n oxidation states:-3,-2,-1,0,+1,+2,+3,+4,+5\n covalent radius:71+-1pm\n");
        break;
    case 8:printf("O\n Oxygen\n atomic mass:15.999u\n electonic configuration:[he]2s2 2p4\n melting point:54.36K\n boiling point:90.188k\n density:1.429g/L\n oxidation states:-2,-1,0,+1,+2\n covalent radius:66+-2pm\n");
        break;
    case 9:printf("F\n Flourine\n atomic mass:18.998403u\n electonic configuration:[he]2s2 2p5\n melting point:53.48K\n boiling point:85.03k\n density:1.696g/L\n oxidation states:-1\n covalent radius:64pm\n");
        break;
    case 10:printf("Ne\n Neon\n atomic mass:20.1797u\n electonic configuration:[he]2s2 2p6\n melting point:24.56K\n boiling point:27.104k\n density:0.9002g/L\n oxidation states:0\n covalent radius:58pm\n");
        break;
    case 11:printf("Na\n Sodium\n atomic mass:22.989u\n electonic configuration:[Ne]3s1\n melting point:370.944K\n boiling point:1156.090k\n density:0.968g/L\n oxidation states:-1,0,+1\n covalent radius:166+-9pm\n");
        break;
    case 12:printf("Mg\n Magnesium\n atomic mass:24.304u\n electonic configuration:[Ne]3s2\n melting point:923K\n boiling point:1363k\n density:1.738g/L\n oxidation states:0,+1,+2\n covalent radius:141+-7pm\n");
        break;
    case 13:printf("Al\n Aluminium\n atomic mass:26.981u\n electonic configuration:[Ne]3s2 3p1\n melting point:933.47K\n boiling point:2743k\n density:2.70g/L\n oxidation states:-2,-1,0,+1,+2,+3\n covalent radius:121+-4pm\n");
        break;
    case 14:printf("Si\n Silicon\n atomic mass:28.084u\n electonic configuration:[Ne]3s2 3p2\n melting point:1687K\n boiling point:3538k\n density:2.3290g/L\n oxidation states:-4,-3,-2,-1,0,+1,+2,+3,+4\n covalent radius:111pm\n");
        break;
    case 15:printf("P\n Phosphorus\n atomic mass:30.973u\n electonic configuration:[Ne]3s2 3p3\n melting point:white-317.3K  red-860k\n boiling point:white-553.7k\n density:white-1.823g/L   red-2.2-2.34g/L\n oxidation states:-3,-2,-1,0,+1,+2,+3,+4,+5\n covalent radius:107+-3pm\n");
        break;
    case 16:printf("S\n Sulfur\n atomic mass:32.059u\n electonic configuration:[Ne]3s2 3p4\n melting point:388.36k\n boiling point:717.8k\n density:alpha-2.07g/L beta-1.96g/L gamma-1.92g/L\n oxidation states:-2,-1,0,+1,+2,+3,+4,+5,+6\n covalent radius:105+-3pm\n");
        break;
    case 17:printf("Cl\n Chlorine\n atomic mass:35.446u\n electonic configuration:[Ne]3s2 3p5\n melting point:171.6k\n boiling point:239.11k\n density:3.2g/L\n oxidation states:-1,+1,+2,+3,+4,+5,+6,+7\n covalent radius:102+-4pm\n");
        break;
    case 18:printf("Ar\n Argon\n atomic mass:39.792u\n electonic configuration:[Ne]3s2 3p6\n melting point:83.302K\n boiling point:87.302k\n density:1.784g/L\n oxidation states:0\n covalent radius:106+-10pm\n");
        break;
    case 19:printf("K\n Potassium\n atomic mass:39.0983\n electonic configuration:[Ar]4s1\n melting point:336.7K\n boiling point:1030.793k\n density:0.89g/L\n oxidation states:-1,+1\n covalent radius:203+-12pm\n");
        break;
    case 20:printf("Ca\n Calcium\n atomic mass:40.078u\n electonic configuration:[Ar]4s2\n melting point:1115K\n boiling point:1757k\n density:1.55g/L\n oxidation states:+1,+2\n covalent radius:176+-10pm\n");
        break;
    case 21:printf("Sc\n Scandium\n atomic mass:44.955u\n electonic configuration:[Ar]3d1 4s2\n melting point:1814K\n boiling point:3109k\n density:2.985g/L\n oxidation states:0,+1,+2,+3,+4\n covalent radius:107+-7pm\n");
        break;
    case 22:printf("Ti\n Titanium\n atomic mass:47.867u\n electonic configuration:[Ar]3d2 4s2\n melting point:1941K\n boiling point:3560k\n density:4.506g/L\n oxidation states:-2,-1,0,+1,+2,+3,+4\n covalent radius:160+-8pm\n");
        break;
    case 23:printf("V\n Vanadium\n atomic mass:50.9415u\n electonic configuration:[Ar]3d3 4s2\n melting point:2183K\n boiling point:3680k\n density:6.11g/L\n oxidation states:-3,-1,0,+1,+2,+3,+4,+5\n covalent radius:153+-8pm\n");
        break;
    case 24:printf("Cr\n Chromium\n atomic mass:51.9961u\n electonic configuration:[Ar]3d5 4s1\n melting point:2180K\n boiling point:2944k\n density:7.15g/L\n oxidation states:-4,-2,-1,0,+1,+2,+3,+4,+5,+6\n covalent radius:139+-5pm\n");
        break;
    case 25:printf("Mn\n Manganese\n atomic mass:54.9380u\n electonic configuration:[Ar]3d5 4s2\n melting point:1519K\n boiling point:2334k\n density:7.21g/L\n oxidation states:-3,-2,-1,0,+1,+2,+3,+4,+5,+6,+7\n covalent radius:139+-5pm\n");
        break;
    case 26:printf("Fe\n Iron\n atomic mass:55.845u\n electonic configuration:[Ar]3d6 4s2\n melting point:1811K\n boiling point:3134k\n density:7.874g/L\n oxidation states:-4,-2,-1,0,+1,+2,+3,+4,+5,+6,+7\n covalent radius:132+-3pm\n");
        break;
    case 27:printf("Co\n Cobalt\n atomic mass:58.933u\n electonic configuration:[Ar]3d7 4s2\n melting point:1768K\n boiling point:3200k\n density:8.90g/L\n oxidation states:-3,-1,0,+1,+2,+3,+4,+5\n covalent radius:126+-3pm\n");
        break;
    case 28:printf("Ni\n Nickel\n atomic mass:58.6934u\n electonic configuration:[Ar]3d8 4s2\n melting point:1728K\n boiling point:3003k\n density:8.9084g/L\n oxidation states:-2,-1,0,+1,+2,+3,+4\n covalent radius:124+-4pm\n");
        break;
    case 29:printf("Cu\n Copper\n atomic mass:63.546u\n electonic configuration:[Ar]3d10 4s1\n melting point:1357.77K\n boiling point:2835k\n density:8.96g/L\n oxidation states:-2,0,+1,+2,+3,+4\n covalent radius:132+-4pm\n");
        break;
    case 30:printf("Zn\n Zinc\n atomic mass:65.38u\n electonic configuration:[Ar]3d10 4s2\n melting point:692.68K\n boiling point:1180k\n density:7.144g/L\n oxidation states:-2,0,+1,+2\n covalent radius:122+-4pm\n");
        break;
     default:printf("no such element");
        break;
    }
}