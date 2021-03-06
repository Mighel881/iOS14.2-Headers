/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface NAGroupedItemDiff : NSObject {

	NSArray* _groupOperations;
	NSArray* _itemOperations;
	NSArray* _fromGroups;
	NSArray* _toGroups;
	/*^block*/id _changeTest;

}

@property (nonatomic,copy) NSArray * fromGroups;                                  //@synthesize fromGroups=_fromGroups - In the implementation block
@property (nonatomic,copy) NSArray * toGroups;                                    //@synthesize toGroups=_toGroups - In the implementation block
@property (nonatomic,copy) id changeTest;                                         //@synthesize changeTest=_changeTest - In the implementation block
@property (nonatomic,copy) NSArray * groupOperations;                             //@synthesize groupOperations=_groupOperations - In the implementation block
@property (nonatomic,copy) NSArray * itemOperations;                              //@synthesize itemOperations=_itemOperations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allOperations; 
@property (nonatomic,copy,readonly) NSString * operationDescription; 
+(id)diffFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(/*^block*/id)arg3 ;
+(id)diffFromGroups:(id)arg1 toGroups:(id)arg2 ;
+(id)_groupedItemDiffWithGroupOperations:(id)arg1 itemOperations:(id)arg2 ;
-(id)initWithFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(/*^block*/id)arg3 ;
-(void)setFromGroups:(NSArray *)arg1 ;
-(void)setToGroups:(NSArray *)arg1 ;
-(void)setChangeTest:(id)arg1 ;
-(void)_performDiff;
-(NSArray *)groupOperations;
-(NSArray *)itemOperations;
-(NSArray *)fromGroups;
-(id)_performItemDiffFromGroup:(id)arg1 atIndex:(id)arg2 toGroup:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setGroupOperations:(NSArray *)arg1 ;
-(void)setItemOperations:(NSArray *)arg1 ;
-(id)changeTest;
-(id)debugDescription;
-(id)description;
-(NSArray *)toGroups;
-(NSString *)operationDescription;
-(NSArray *)allOperations;
-(id)_briefDescriptionForOperations:(id)arg1 type:(id)arg2 ;
-(id)_operationDescriptionWithPrefix:(id)arg1 ;
@end

