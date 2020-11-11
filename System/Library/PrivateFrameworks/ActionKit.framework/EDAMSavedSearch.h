/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMSavedSearchScope;

@interface EDAMSavedSearch : FATObject {

	NSString* _guid;
	NSString* _name;
	NSString* _query;
	NSNumber* _format;
	NSNumber* _updateSequenceNum;
	EDAMSavedSearchScope* _scope;

}

@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSNumber * format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) EDAMSavedSearchScope * scope;              //@synthesize scope=_scope - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)guid;
-(void)setQuery:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)setFormat:(NSNumber *)arg1 ;
-(NSString *)query;
-(NSNumber *)format;
-(void)setScope:(EDAMSavedSearchScope *)arg1 ;
-(NSString *)name;
-(EDAMSavedSearchScope *)scope;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end
