/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol PGQuestion <NSObject>
@property (nonatomic,copy,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo; 
@required
-(unsigned short)entityType;
-(void)remove;
-(void)setScore:(double)arg1;
-(double)score;
-(unsigned short)state;
-(NSDictionary *)additionalInfo;
-(unsigned short)type;
-(unsigned short)displayType;
-(NSString *)entityIdentifier;
-(double)localFactoryScore;
-(void)persistWithCreationDate:(id)arg1;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1;

@end
