//
// Copyright (c) 2008-2023, Datalogics, Inc. All rights reserved.
//

std::string DisplayFixed(ASFixed *Fixed);
std::string AppendPoint(ASFixedPoint *Point, ASFixedMatrix *Matrix, ASBool MoreToCome);
std::string DisplayColor(PDEColorSpec *);
std::string DisplayCosDict(CosObj cobj);
std::string DisplayQuad(ASFixedQuad *Quad);
std::string DisplayMatrix(ASFixedMatrix *Matrix);
void DisplayGraphicState(PDEGraphicState *GState);
void DisplayText(PDEText Text, ASFixedMatrix *Matrix, PDEGraphicState *GState, ASBool HasGState);
void DisplayPath(PDEPath Path, ASFixedMatrix *Matrix, PDEGraphicState *GState, ASBool HasGState);
void DisplayImage(PDEImage Image, ASFixedMatrix *Matrix, PDEGraphicState *GState, ASBool HasGState);
void AnalyzePDEContent(PDEContent Content, ASFixedMatrix *Matrix);

void DisplayShading(PDEShading Shading, ASFixedMatrix *Matrix, PDEGraphicState *GState, ASBool HasGState);
