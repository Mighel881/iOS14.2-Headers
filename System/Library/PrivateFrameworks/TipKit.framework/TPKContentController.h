/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TPKContentViewDelegate.h>
#import <libobjc.A.dylib/TPKTipContentHintViewDelegate.h>
#import <libobjc.A.dylib/TPSEventsProviderDelegate.h>
#import <libobjc.A.dylib/TPSConstellationContentParserDelegate.h>

@protocol OS_dispatch_queue;
@class NSDate, NSArray, NSObject, TPSDuetEventsProvider, TPKContent, NSString, NSHashTable, TPSMiniTipContentManager, TPKContentViewController;

@interface TPKContentController : NSObject <TPKContentViewDelegate, TPKTipContentHintViewDelegate, TPSEventsProviderDelegate, TPSConstellationContentParserDelegate> {

	BOOL _contentOnScreen;
	BOOL _enterForegroundNotificationRegistered;
	BOOL _allowsOverrides;
	BOOL _userPerformedDesiredOutcome;
	BOOL _userPerformedContentDesiredOutcome;
	BOOL _displayTestContent;
	NSDate* _nextAllowedCheckDate;
	NSDate* _lastContentValidateDate;
	NSArray* _currentContext;
	NSObject*<OS_dispatch_queue> _checkQueue;
	TPSDuetEventsProvider* _duetEventsProvider;
	BOOL _contentDismissedByUser;
	long long _state;
	TPKContent* _content;
	NSString* _context;
	NSHashTable* _delegates;
	TPSMiniTipContentManager* _miniTipContentManager;
	NSString* __contentTitle;
	NSString* __contentText;
	TPKContentViewController* _currentPopOverController;

}

@property (assign,nonatomic) long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) TPKContent * content;                                                              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSString * context;                                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                                           //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) TPSMiniTipContentManager * miniTipContentManager;                                  //@synthesize miniTipContentManager=_miniTipContentManager - In the implementation block
@property (setter=_setContentTitle:,getter=_contentTitle,nonatomic,copy) NSString * _contentTitle;              //@synthesize _contentTitle=__contentTitle - In the implementation block
@property (setter=_setContentText:,getter=_contentText,nonatomic,copy) NSString * _contentText;                 //@synthesize _contentText=__contentText - In the implementation block
@property (nonatomic,retain) TPKContentViewController * currentPopOverController;                               //@synthesize currentPopOverController=_currentPopOverController - In the implementation block
@property (nonatomic,readonly) BOOL contentDismissedByUser;                                                     //@synthesize contentDismissedByUser=_contentDismissedByUser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_identifierForContext:(id)arg1 ;
+(id)_legacyIdentifierForContext:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)_setContentTitle:(id)arg1 ;
-(id)_createContentViewWithContent:(id)arg1 asPopover:(BOOL)arg2 ;
-(void)_tipContentHintView:(id)arg1 actionTapped:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(void)registerCustomContentView:(id)arg1 ;
-(id)createContentViewWithContent:(id)arg1 ;
-(NSString *)_contentText;
-(void)setState:(long long)arg1 ;
-(void)_updateCachedContent:(id)arg1 ;
-(void)setMiniTipContentManager:(TPSMiniTipContentManager *)arg1 ;
-(void)setContent:(TPKContent *)arg1 ;
-(long long)state;
-(void)contentDisplayDelay;
-(void)_clearCachedContent;
-(void)checkForContent;
-(id)constellationContentParser:(id)arg1 personalizedStringForID:(unsigned long long)arg2 ;
-(void)_tipContentHintViewContentViewNeedsLayout:(id)arg1 reason:(unsigned long long)arg2 ;
-(TPSMiniTipContentManager *)miniTipContentManager;
-(void)notifyEventOccurred:(long long)arg1 content:(id)arg2 context:(id)arg3 ;
-(void)_setContentText:(id)arg1 ;
-(void)showTestContent;
-(void)_contentDidDismiss:(id)arg1 ;
-(void)_deregisterCallbackForDismissalEvents:(id)arg1 ;
-(NSString *)context;
-(BOOL)_isCacheContentValidForBundleID:(id)arg1 ;
-(id)_tipContentHintView:(id)arg1 iconForCustomizationID:(long long)arg2 ;
-(NSString *)description;
-(void)notifyDelegate:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(void)_contentViewWillBeRemoved:(id)arg1 ;
-(void)setCurrentPopOverController:(TPKContentViewController *)arg1 ;
-(void)_contentViewWillBeShown:(id)arg1 ;
-(void)_registerCallbackForDismissalEvents:(id)arg1 ;
-(id)attributedStringForContent:(id)arg1 error:(id*)arg2 ;
-(id)duetEventsFromContextualEvents:(id)arg1 ;
-(NSString *)_contentTitle;
-(void)applicationWillEnterForeground;
-(void)_clearLegacyCachedContent;
-(void)_tipContentHintView:(id)arg1 viewTappedForIdentifier:(id)arg2 ;
-(id)_cachedContent;
-(void)checkForContentForBundleID:(id)arg1 ;
-(void)addDelegate:(id)arg1 content:(id)arg2 ;
-(id)createContentViewControllerWithContent:(id)arg1 sourceViewController:(id)arg2 ;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(TPKContentViewController *)currentPopOverController;
-(void)cancelContentDisplayDelay;
-(void)_contentDidDisplay:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2 ;
-(void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2 ;
-(void)removeDelegate:(id)arg1 content:(id)arg2 ;
-(BOOL)contentDismissedByUser;
-(void)unregisterEnterForegroundNotification;
-(id)initWithContext:(id)arg1 ;
-(void)_tipContentHintViewCloseButtonTapped:(id)arg1 ;
-(TPKContent *)content;
-(void)notifyDelegate:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
@end
