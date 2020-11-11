/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {

	unsigned char _touchStreamIdentifier;
	BOOL _systemGesturesPossible;
	BOOL _systemGestureStateChange;
	float _maximumForce;
	double _digitizerSurfaceWidth;
	double _digitizerSurfaceHeight;
	NSArray* _pathAttributes;
	double _initialTouchTimestamp;

}

@property (assign,nonatomic) float maximumForce;                               //@synthesize maximumForce=_maximumForce - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceWidth;                     //@synthesize digitizerSurfaceWidth=_digitizerSurfaceWidth - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceHeight;                    //@synthesize digitizerSurfaceHeight=_digitizerSurfaceHeight - In the implementation block
@property (nonatomic,retain) NSArray * pathAttributes;                         //@synthesize pathAttributes=_pathAttributes - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                     //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) unsigned char touchStreamIdentifier;              //@synthesize touchStreamIdentifier=_touchStreamIdentifier - In the implementation block
@property (assign,nonatomic) BOOL systemGesturesPossible;                      //@synthesize systemGesturesPossible=_systemGesturesPossible - In the implementation block
@property (assign,nonatomic) BOOL systemGestureStateChange;                    //@synthesize systemGestureStateChange=_systemGestureStateChange - In the implementation block
+(id)protobufSchema;
-(double)digitizerSurfaceHeight;
-(float)maximumForce;
-(NSArray *)pathAttributes;
-(BOOL)systemGesturesPossible;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)setDigitizerSurfaceHeight:(double)arg1 ;
-(void)setPathAttributes:(NSArray *)arg1 ;
-(BOOL)systemGestureStateChange;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTouchStreamIdentifier:(unsigned char)arg1 ;
-(void)setMaximumForce:(float)arg1 ;
-(void)setDigitizerSurfaceWidth:(double)arg1 ;
-(unsigned char)touchStreamIdentifier;
-(double)initialTouchTimestamp;
-(double)digitizerSurfaceWidth;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSystemGestureStateChange:(BOOL)arg1 ;
-(void)setSystemGesturesPossible:(BOOL)arg1 ;
@end
