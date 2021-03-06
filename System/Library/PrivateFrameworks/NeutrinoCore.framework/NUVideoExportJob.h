/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob {

	SCD_Struct_NU6 _livePhotoKeyFrameTime;

}
-(BOOL)render:(out id*)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(id)renderer:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(id)initWithVideoExportRequest:(id)arg1 ;
-(id)initWithExportRequest:(id)arg1 ;
-(id)videoExportRequest;
-(BOOL)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(SCD_Struct_NU6)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 inputSize:(CGSize)arg6 outputSize:(CGSize)arg7 error:(out id*)arg8 ;
@end

