/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNAvatarCardActionListController.h>
#import <libobjc.A.dylib/CNUINavigationListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>

@protocol CNUIUserActionListDataSource, CNContactActionsControllerDelegate, CNUINavigationListStyle;
@class CNContact, NSDictionary, NSArray, UIViewController, NSString;

@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer> {

	BOOL _shouldUseOutlinedActionGlyphStyle;
	CNContact* _contact;
	id<CNUIUserActionListDataSource> _actionsDataSource;
	NSDictionary* _modelsByActionTypes;
	NSArray* _modelCancelables;
	UIViewController* _viewController;
	id<CNContactActionsControllerDelegate> _delegate;
	id<CNUINavigationListStyle> _navigationListStyle;
	long long _actionsOrder;
	NSArray* _actionTypes;

}

@property (assign,nonatomic) BOOL actionsReversed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CNContact * contact;                                                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionListDataSource> actionsDataSource;                  //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * modelsByActionTypes;                                    //@synthesize modelsByActionTypes=_modelsByActionTypes - In the implementation block
@property (nonatomic,retain) NSArray * modelCancelables;                                          //@synthesize modelCancelables=_modelCancelables - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactActionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (assign,nonatomic) long long actionsOrder;                                              //@synthesize actionsOrder=_actionsOrder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionTypes;                                        //@synthesize actionTypes=_actionTypes - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOutlinedActionGlyphStyle;                              //@synthesize shouldUseOutlinedActionGlyphStyle=_shouldUseOutlinedActionGlyphStyle - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)supportedActionTypes;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(id<CNContactActionsControllerDelegate>)delegate;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithContact:(id)arg1 actionTypes:(id)arg2 ;
-(void)navigationListController:(id)arg1 didSelectItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 dataSource:(id)arg2 actionTypes:(id)arg3 ;
-(id)displayedController;
-(void)retrieveModels;
-(void)cancelModels;
-(id)modelForActionType:(id)arg1 ;
-(void)setActionsOrder:(long long)arg1 ;
-(id)imageForActionType:(id)arg1 ;
-(id)navigationListItemForUserActionType:(id)arg1 ;
-(void)prepareNavigationListItems;
-(void)generateMenuForItem:(id)arg1 image:(id)arg2 withCurrentList:(id)arg3 ;
-(long long)actionsOrder;
-(id)actionForItem:(id)arg1 withImage:(id)arg2 ;
-(BOOL)shouldUseOutlinedActionGlyphStyle;
-(id<CNUIUserActionListDataSource>)actionsDataSource;
-(void)setShouldUseOutlinedActionGlyphStyle:(BOOL)arg1 ;
-(void)setActionsDataSource:(id<CNUIUserActionListDataSource>)arg1 ;
-(NSDictionary *)modelsByActionTypes;
-(void)setModelsByActionTypes:(NSDictionary *)arg1 ;
-(NSArray *)modelCancelables;
-(void)setModelCancelables:(NSArray *)arg1 ;
-(void)setDelegate:(id<CNContactActionsControllerDelegate>)arg1 ;
-(BOOL)actionsReversed;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(void)styleUpdated;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(void)setActionsReversed:(BOOL)arg1 ;
-(void)dealloc;
-(NSArray *)actionTypes;
@end

