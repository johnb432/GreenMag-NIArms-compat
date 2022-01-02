//.300win Mk248 Mod 1
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_1Rnd);
    scope = 2;
				picture = QGPATH(main,data\lcal.paa);
};
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,mk248mod1,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300win_mk248mod1_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,mk248mod1,1Rnd));
};
