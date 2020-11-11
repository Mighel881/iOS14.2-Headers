/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SIScaler : NSObject {

	CVPixelBufferPoolRef _pool;
	OpaqueVTPixelTransferSessionRef _session;
	CGSize _inputResolution;
	CGSize _outputResolution;

}
-(id)initForInputResolution:(CGSize)arg1 andOutputResolution:(CGSize)arg2 ;
-(CVBufferRef)scaleImage:(CVBufferRef)arg1 ;
@end
