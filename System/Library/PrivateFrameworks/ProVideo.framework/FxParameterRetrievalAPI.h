/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxParameterRetrievalAPI
@required
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getParameterFlags:(unsigned*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getFloatValue:(double*)arg1 fromParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)getIntValue:(int*)arg1 fromParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)getBoolValue:(BOOL*)arg1 fromParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned)arg4 atTime:(double)arg5;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned)arg5 atTime:(double)arg6;
-(BOOL)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned)arg3 atTime:(double)arg4;
-(BOOL)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_OZ104*)arg4 fromParm:(unsigned)arg5 atTime:(double)arg6;
-(BOOL)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_OZ104*)arg4 fromParm:(unsigned)arg5 atTime:(double)arg6;

@end
