/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ASCodableCloudKitActivitySnapshot;

@interface ASCodableActivityDataPreview : PBCodable <NSCopying> {

	double _date;
	NSMutableArray* _achievements;
	ASCodableCloudKitActivitySnapshot* _activitySnapshot;
	NSMutableArray* _workouts;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,readonly) BOOL hasActivitySnapshot; 
@property (nonatomic,retain) ASCodableCloudKitActivitySnapshot * activitySnapshot;              //@synthesize activitySnapshot=_activitySnapshot - In the implementation block
@property (nonatomic,retain) NSMutableArray * workouts;                                         //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * achievements;                                     //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                                       //@synthesize date=_date - In the implementation block
+(Class)workoutsType;
+(Class)achievementsType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)achievements;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(double)date;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)workouts;
-(void)copyTo:(id)arg1 ;
-(void)addWorkouts:(id)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(BOOL)hasDate;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAchievements:(id)arg1 ;
-(void)setActivitySnapshot:(ASCodableCloudKitActivitySnapshot *)arg1 ;
-(unsigned long long)achievementsCount;
-(void)clearAchievements;
-(id)achievementsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActivitySnapshot;
-(ASCodableCloudKitActivitySnapshot *)activitySnapshot;
@end
