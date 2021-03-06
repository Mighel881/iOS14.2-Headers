/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUICore/CNUIUserActionListDataSource.h>
#import <libobjc.A.dylib/CNUIUserActionDisambiguationViewDataSource.h>

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
@required
-(id)categoriesForContactActionsView:(id)arg1;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;

@end


@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>

@property (assign,nonatomic) BOOL tracksChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)categoriesForContactActionsView:(id)arg1 ;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2 ;
@end

