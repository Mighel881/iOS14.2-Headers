/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol NSFetchedResultsSectionInfo
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * indexTitle; 
@property (nonatomic,readonly) unsigned long long numberOfObjects; 
@property (nonatomic,readonly) NSArray * objects; 
@required
-(NSArray *)objects;
-(NSString *)indexTitle;
-(NSString *)name;
-(unsigned long long)numberOfObjects;

@end

