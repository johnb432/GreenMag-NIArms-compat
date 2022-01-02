//10x25 JHP
class GEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\9mm.paa);
};
class GEGVAR(ammo,TRIPLES(10x25,JHP,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(10x25,JHP,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(10x25,JHP,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(10x25,JHP,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(10x25,JHP,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(10x25,JHP,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(10x25_JHP_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(10x25,JHP,1Rnd));
};
