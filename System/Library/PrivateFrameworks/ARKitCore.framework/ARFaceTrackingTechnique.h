/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARImageBasedTechnique.h>

@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {

	NSUUID* _singleUserAnchorIdentifier;
	BOOL _isFaceTracked;
	long long _maximumNumberOfTrackedFaces;

}

@property (assign) BOOL isFaceTracked;                                             //@synthesize isFaceTracked=_isFaceTracked - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(id)processData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(BOOL)isFaceTracked;
-(void)setIsFaceTracked:(BOOL)arg1 ;
@end

