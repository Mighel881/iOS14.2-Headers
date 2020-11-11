/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSArray, SAUINanoImageResource, SAUIDecoratedText, NSString;

@interface SASTTableRowItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSArray * columnValues; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableRowItem;
+(id)tableRowItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)columnValues;
-(void)setColumnValues:(NSArray *)arg1 ;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(SAUIDecoratedText *)title;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
@end
