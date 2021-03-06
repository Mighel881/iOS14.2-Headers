/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PGMoodSourceSceneIdentifier : NSObject {

	BOOL _isDistributed;
	BOOL _isHighConfidence;
	NSString* _moodIdentifier;

}

@property (retain) NSString * moodIdentifier;              //@synthesize moodIdentifier=_moodIdentifier - In the implementation block
@property (assign) BOOL isDistributed;                     //@synthesize isDistributed=_isDistributed - In the implementation block
@property (assign) BOOL isHighConfidence;                  //@synthesize isHighConfidence=_isHighConfidence - In the implementation block
-(BOOL)isHighConfidence;
-(NSString *)moodIdentifier;
-(void)setMoodIdentifier:(NSString *)arg1 ;
-(BOOL)isDistributed;
-(void)setIsDistributed:(BOOL)arg1 ;
-(void)setIsHighConfidence:(BOOL)arg1 ;
@end

