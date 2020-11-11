/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSURL;


@protocol NTSectionDisplayDescriptor <NSCopying>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColorLight; 
@property (nonatomic,copy,readonly) NSString * nameColorDark; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * nameActionURL; 
@property (nonatomic,copy,readonly) NSString * backgroundColorLight; 
@property (nonatomic,copy,readonly) NSString * backgroundColorDark; 
@required
-(NSString *)nameColorLight;
-(NSString *)nameColorDark;
-(NSString *)name;
-(NSString *)actionTitle;
-(NSURL *)actionURL;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSURL *)nameActionURL;

@end
