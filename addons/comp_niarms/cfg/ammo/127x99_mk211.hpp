//12.7x99 Mk211 Mod 0 Raufoss 50BMG
class GEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\127mm.paa);
};
class GEGVAR(ammo,TRIPLES(127x99,mk211,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,mk211,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,mk211,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,mk211,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,mk211,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,mk211,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_mk211_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,mk211,1Rnd));
};
