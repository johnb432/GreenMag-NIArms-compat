//6,8x43 IRtracer
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd));
};
class GEGVAR(ammo,TRIPLES(680x43,IRtracer,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(680x43_IRtracer_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(680x43,IRtracer,1Rnd));
};
