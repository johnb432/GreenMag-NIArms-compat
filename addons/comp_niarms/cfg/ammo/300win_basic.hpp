//.300win
class GEGVAR(ammo,TRIPLES(300win,basic,1Rnd)): GEGVAR(core,1Rnd) {
    displayName = CSTRING(300win_basic_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\lcal.paa);
};
class GEGVAR(ammo,TRIPLES(300win,basic,10Rnd)): GEGVAR(core,10Rnd) {
    displayName = CSTRING(300win_basic_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,basic,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,basic,20Rnd)): GEGVAR(core,20Rnd) {
    displayName = CSTRING(300win_basic_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,basic,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,basic,30Rnd)): GEGVAR(core,30Rnd) {
    displayName = CSTRING(300win_basic_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,basic,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,basic,40Rnd)): GEGVAR(core,40Rnd) {
    displayName = CSTRING(300win_basic_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,basic,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,basic,50Rnd)): GEGVAR(core,50Rnd) {
    displayName = CSTRING(300win_basic_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,basic,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,basic,60Rnd)): GEGVAR(core,60Rnd) {
    displayName = CSTRING(300win_basic_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,basic,1Rnd));
};
