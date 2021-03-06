/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<float>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(BOOL)frameCleanup;
-(double)getProjectionFOVYDegrees:(/*function pointer*/void**)arg1 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA84*)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(BOOL)renderOutput:(id)arg1 withInfo:(SCD_Struct_PA84*)arg2 ;
@end

