#ifndef _GAMMA_EXPANSION_EFFECT_H 
#define _GAMMA_EXPANSION_EFFECT_H 1

#include "effect.h"
#include "effect_chain.h"

#define EXPANSION_CURVE_SIZE 256

class GammaExpansionEffect : public Effect {
public:
	GammaExpansionEffect();
	std::string output_fragment_shader();

	virtual bool needs_linear_light() { return false; }
	virtual bool needs_srgb_primaries() { return false; }

private:
	GammaCurve source_curve;
	float expansion_curve[EXPANSION_CURVE_SIZE];
};

#endif // !defined(_GAMMA_EXPANSION_EFFECT_H)
