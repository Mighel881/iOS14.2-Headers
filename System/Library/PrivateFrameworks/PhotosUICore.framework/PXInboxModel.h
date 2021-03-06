/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString, NSArray;


@protocol PXInboxModel <NSObject,NSCopying>
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) long long inboxModelType; 
@property (nonatomic,copy,readonly) NSString * inboxModelTitle; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,copy,readonly) NSArray * senderNames; 
@property (nonatomic,readonly) BOOL userIsSender; 
@property (assign,getter=isSeen,nonatomic) BOOL seen; 
@property (nonatomic,readonly) NSArray * leftPreviewItems; 
@property (nonatomic,readonly) NSArray * assetsForOneUp; 
@property (nonatomic,readonly) NSString * ownerFirstName; 
@property (nonatomic,readonly) NSString * ownerLastName; 
@property (nonatomic,readonly) NSString * ownerEmail; 
@property (nonatomic,readonly) NSString * keyCommentGUID; 
@optional
-(NSString *)ownerEmail;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(NSArray *)assetsForOneUp;
-(void)fetchLeftPreviewItemsWithCompletion:(/*^block*/id)arg1;
-(NSString *)keyCommentGUID;

@required
-(unsigned long long)assetsCount;
-(BOOL)isSeen;
-(long long)inboxModelType;
-(void)setSeen:(BOOL)arg1;
-(BOOL)userIsSender;
-(NSString *)inboxModelTitle;
-(NSArray *)senderNames;
-(NSArray *)leftPreviewItems;
-(NSDate *)creationDate;

@end

