//,300 Blackout RNBT
class GEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(300BO,RNBT,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,RNBT,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,RNBT,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,RNBT,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,RNBT,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,RNBT,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(300BO_RNBT_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,RNBT,1Rnd));
};
