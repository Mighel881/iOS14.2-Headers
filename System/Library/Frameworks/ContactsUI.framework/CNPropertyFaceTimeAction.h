/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate> {

	long long _type;
	CNPropertyBestIDSValueQuery* _bestFaceTimeQuery;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestFaceTimeQuery;              //@synthesize bestFaceTimeQuery=_bestFaceTimeQuery - In the implementation block
@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
-(void)setType:(long long)arg1 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)queryComplete;
-(void)_queryFaceTimeStatus;
-(CNPropertyBestIDSValueQuery *)bestFaceTimeQuery;
-(void)setBestFaceTimeQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(long long)type;
-(BOOL)canPerformAction;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)dealloc;
@end

