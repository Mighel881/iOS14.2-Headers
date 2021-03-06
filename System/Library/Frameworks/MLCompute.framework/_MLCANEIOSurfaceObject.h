/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MLCompute/MLCompute-Structs.h>
@class _ANEIOSurfaceObject, NSDictionary;

@interface _MLCANEIOSurfaceObject : NSObject {

	_ANEIOSurfaceObject* _ioSurfaceObject;
	NSDictionary* _liveIOStatus;

}

@property (nonatomic,retain,readonly) _ANEIOSurfaceObject * ioSurfaceObject;              //@synthesize ioSurfaceObject=_ioSurfaceObject - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * liveIOStatus;                        //@synthesize liveIOStatus=_liveIOStatus - In the implementation block
+(id)objectWithANEIOSurfaceObject:(id)arg1 liveIOStatus:(id)arg2 ;
+(IOSurfaceRef)createIOSurface1x1WithLength:(unsigned long long)arg1 ;
-(id)initWithIOSurface:(id)arg1 liveIOStatus:(id)arg2 ;
-(_ANEIOSurfaceObject *)ioSurfaceObject;
-(NSDictionary *)liveIOStatus;
@end

