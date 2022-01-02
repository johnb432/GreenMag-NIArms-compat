//12.7x99 tracer 50BMG
class GEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\127mm.paa);
};
class GEGVAR(ammo,TRIPLES(127x99,tracer,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,tracer,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,tracer,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,tracer,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,tracer,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,tracer,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(127x99_tracer_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,tracer,1Rnd));
};
