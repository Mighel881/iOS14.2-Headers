/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface VNClustererOptions : NSObject {

	float _threshold;
	float _torsoThreshold;
	NSString* _type;
	NSString* _cachePath;
	NSData* _state;
	unsigned long long _requestRevision;

}

@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * cachePath;                              //@synthesize cachePath=_cachePath - In the implementation block
@property (nonatomic,retain) NSData * state;                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float threshold;                                 //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) float torsoThreshold;                            //@synthesize torsoThreshold=_torsoThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
-(void)setState:(NSData *)arg1 ;
-(NSString *)cachePath;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 ;
-(void)setType:(NSString *)arg1 ;
-(NSData *)state;
-(unsigned long long)requestRevision;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 ;
-(void)setCachePath:(NSString *)arg1 ;
-(float)torsoThreshold;
-(void)setTorsoThreshold:(float)arg1 ;
-(void)setRequestRevision:(unsigned long long)arg1 ;
-(float)threshold;
-(NSString *)type;
-(void)setThreshold:(float)arg1 ;
@end

