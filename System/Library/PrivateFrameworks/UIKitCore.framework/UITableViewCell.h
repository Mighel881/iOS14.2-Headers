/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>
#import <UIKit/UITableConstantsCellProviding.h>
#import <UIKitCore/_UISystemBackgroundViewContainer.h>
#import <UIKitCore/_UIInteractiveHighlighting.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITable_UITableViewCellDelegate, _UIContentViewInternal, _UIBackgroundConfigurationInternal, UITableConstants;
@class NSMutableDictionary, NSString, _UIFloatingContentView, UIView, UIImageView, UILabel, _UISystemBackgroundView, UIColor, UIVisualEffect, UIStoryboardPreviewingSegueTemplateStorage, UIControl, _UITableViewCellSeparatorView, UITextField, NSTimer, NSArray, UILongPressGestureRecognizer, NSIndexPath, UIFocusGuide, UICellAccessoryManager, UICellConfigurationState, UIBackgroundConfiguration;

@interface UITableViewCell : UIView <UIScrollViewDelegate, _UILayoutEngineSuspending, UITableConstantsCellProviding, _UISystemBackgroundViewContainer, _UIInteractiveHighlighting, NSCoding, UIGestureRecognizerDelegate> {

	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selected : 1;
		unsigned editing : 1;
		unsigned swiped : 1;
		unsigned reordering : 1;
		unsigned showingCompactContextMenu : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsReorderControl : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned sectionLocation : 3;
		unsigned selectionGrouping : 3;
		unsigned tableViewStyle : 5;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned usingDefaultBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned shouldShowMenu : 1;
		unsigned showingMenu : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned deleteAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned animatingEditing : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned shouldHaveFullLengthTopSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
		unsigned drawsSeparatorAtBottomOfSection : 1;
		unsigned separatorBackdropOverlayBlendMode : 3;
		unsigned separatorDrawsInVibrantLightMode : 1;
		unsigned separatorHidden : 1;
		unsigned hidingSeparatorsForSelection : 1;
		unsigned wantsClipping : 1;
		unsigned allowsReorderingWhenNotEditing : 1;
		unsigned needsHeightCalculation : 1;
		unsigned hasEditingFocusGuides : 1;
		unsigned focusStyle : 3;
		unsigned accessoryViewsHidden : 1;
		unsigned skipsLayout : 1;
		unsigned separatorInsetIsRelativeToCellEdges : 1;
		unsigned highlightingInteractively : 1;
		unsigned userInteractionEnabledWhileDragging : 1;
		unsigned userInteractionEnabledBeforeDragging : 2;
		unsigned insetsContentViewsToSafeArea : 1;
		unsigned needsAccessoriesUpdate : 1;
		unsigned needsAccessoriesUpdateForced : 1;
		unsigned badgeVisible : 1;
		unsigned shouldRestoreTextLabelAfterSystemTextSizeChange : 1;
		unsigned shouldRestoreDetailTextLabelAfterSystemTextSizeChange : 1;
		unsigned shouldRestoreEditableTextFieldAfterSystemTextSizeChange : 1;
		unsigned tableViewHasBeenExplicitlySet : 1;
		unsigned ignoresMultipleSelectionDuringEditing : 1;
		unsigned hasEverUsedRoundedGroups : 1;
		unsigned preserveBackgroundMaskingForReorderAnimationEnding : 1;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned hasCustomBackgroundColor : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned hasCustomSelectedBackgroundView : 1;
		unsigned hasCustomMultipleSelectionBackgroundView : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned hasCustomIndentationWidth : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
		unsigned hasShownHighlightedOrSelectedBackground : 1;
		unsigned needsFocusRingUpdateAfterLayout : 1;
	}  _tableCellFlags;
	NSMutableDictionary* __editingControlTintColors;
	id<UITable_UITableViewCellDelegate> _tableView;
	id _layoutManager;
	id _target;
	SEL _editAction;
	SEL _accessoryAction;
	id _editingData;
	long long _indentationLevel;
	double _indentationWidth;
	double _extraLeadingLayoutMarginForIndentation;
	NSString* _reuseIdentifier;
	_UIFloatingContentView* _floatingContentView;
	long long _lineBreakModeBeforeFocus;
	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UIView* _multipleSelectionBackgroundView;
	UIView* _selectedOverlayView;
	double _selectionFadeDuration;
	NSString* _contentViewConfigurationIdentifier;
	id<_UIContentViewInternal> _viewForContentConfiguration;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	id<_UIBackgroundConfigurationInternal> _lastNormalBackgroundViewConfiguration;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _sectionBorderColor;
	UIView* _floatingSeparatorView;
	UIView* _topShadowAnimationView;
	UIView* _bottomShadowAnimationView;
	id _badge;
	CFDictionaryRef _unhighlightedStates;
	id _selectionSegueTemplate;
	id _accessoryActionSegueTemplate;
	UIStoryboardPreviewingSegueTemplateStorage* _accessoryActionPreviewingSegueTemplateStorage;
	UIControl* _accessoryView;
	UIControl* _editingAccessoryView;
	UIView* _customAccessoryView;
	UIView* _customEditingAccessoryView;
	_UITableViewCellSeparatorView* _separatorView;
	_UITableViewCellSeparatorView* _topSeparatorView;
	UITextField* _editableTextField;
	double _lastSelectionTime;
	NSTimer* _deselectTimer;
	double _textFieldOffset;
	double _indexBarExtentFromEdge;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	SEL _returnAction;
	UIColor* _selectionTintColor;
	NSArray* _selectionEffects;
	UIColor* _accessoryTintColor;
	UILongPressGestureRecognizer* _longPressGesture;
	NSIndexPath* _representedIndexPath;
	UIView* _clearBlendingView;
	double _defaultLeadingMarginWidth;
	double _defaultTrailingCellMarginWidth;
	UIFocusGuide* _editControlFocusGuide;
	UIFocusGuide* _reorderControlFocusGuide;
	id<UITableConstants> _constants;
	long long _dragState;
	long long _dropState;
	BOOL _isLayoutEngineSuspended;
	UICellAccessoryManager* _accessoryManager;

}

@property (assign,setter=_setUsesModernAccessoriesLayout:,getter=_usesModernAccessoriesLayout,nonatomic) BOOL usesModernAccessoriesLayout; 
@property (getter=_accessoryManager,nonatomic,readonly) UICellAccessoryManager * accessoryManager;                                                       //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (setter=_setEditControlFocusGuide:,getter=_editControlFocusGuide,nonatomic,retain) UIFocusGuide * editControlFocusGuide;                       //@synthesize editControlFocusGuide=_editControlFocusGuide - In the implementation block
@property (setter=_setReorderControlFocusGuide:,getter=_reorderControlFocusGuide,nonatomic,retain) UIFocusGuide * reorderControlFocusGuide;              //@synthesize reorderControlFocusGuide=_reorderControlFocusGuide - In the implementation block
@property (assign,setter=_setSkipsLayout:,getter=_skipsLayout,nonatomic) BOOL skipsLayout; 
@property (nonatomic,readonly) UICellConfigurationState * configurationState; 
@property (nonatomic,copy) id<UIContentConfiguration> contentConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesContentConfiguration; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,copy) UIBackgroundConfiguration * backgroundConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) long long selectionStyle; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) long long editingStyle; 
@property (assign,nonatomic) BOOL showsReorderControl; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) long long accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) long long editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) double indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) BOOL showingDeleteConfirmation; 
@property (assign,nonatomic) long long focusStyle; 
@property (assign,nonatomic) BOOL userInteractionEnabledWhileDragging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
@property (getter=_minimumCellAccessoryMargin,nonatomic,readonly) double minimumCellAccessoryMargin; 
@property (getter=_cellStyle,nonatomic,readonly) long long cellStyle; 
+(void)_initializeForIdiom:(long long)arg1 ;
+(void)_ensureInitializeSystemAppearanceModifications;
-(id)target;
-(void)sendSubviewToBack:(id)arg1 ;
-(id)_constants;
-(void)setSeparatorColor:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(id)_badge;
-(UIView *)accessoryView;
-(void)setFont:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)cut:(id)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(long long)lineBreakMode;
-(void)setText:(id)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)canBecomeFocused;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_isAnimating;
-(id)_imageView;
-(long long)editingStyle;
-(void)_updateAccessories;
-(void)_setDragging:(BOOL)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(BOOL)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(long long)separatorStyle;
-(CGPoint)center;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)_defaultFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)separatorColor;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_target;
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)_adjustedRawLayoutMargins:(UIEdgeInsets)arg1 withLeadingLayoutMarginAdjustment:(double)arg2 ;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3 ;
-(id)_badge:(BOOL)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_setTarget:(id)arg1 ;
-(id)editableTextField;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(id)_previewingSegueTemplateStorageForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)tableViewStyle;
-(UIView *)backgroundView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(long long)selectionStyle;
-(id)_tableView;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(long long)accessoryType;
-(void)setFrame:(CGRect)arg1 ;
-(long long)textAlignment;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(id)font;
-(void)setAutomaticallyUpdatesBackgroundConfiguration:(BOOL)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)text;
-(id)_badgeText;
-(id)_stateForUpdatingBackgroundConfigurationWithState:(id)arg1 ;
-(BOOL)_backgroundFillIsCustomizedForSelectionOrHighlight;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(id)_badgeFont;
-(void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(SEL)editAction;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)_isSwiped;
-(void)setImage:(id)arg1 ;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(void)setAccessoryType:(long long)arg1 ;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_setContentView:(id)arg1 ;
-(id)textColor;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAutomaticallyUpdatesContentConfiguration:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)image;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(id)backgroundColor;
-(void)_updateBackgroundViewConfigurationForState:(id)arg1 ;
-(BOOL)_insetsBackground;
-(BOOL)automaticallyUpdatesBackgroundConfiguration;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(double)indentationWidth;
-(BOOL)_usesRoundedGroups;
-(id)_customEditingAccessoryView:(BOOL)arg1 ;
-(BOOL)_hasEditingAccessoryView;
-(id)_layoutDebuggingTitle;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(id)_editingAccessoryView:(BOOL)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)layoutManager;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)wasSwiped;
-(BOOL)drawingEnabled;
-(void)setTarget:(id)arg1 ;
-(long long)_dragState;
-(void)_updateLeadingLayoutMarginForIndentation;
-(BOOL)_isLayoutEngineSuspended;
-(void)_setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)_allowsReorderingWhenNotEditing;
-(id)_customAccessoryView:(BOOL)arg1 ;
-(BOOL)_hasAccessoryView;
-(UIView *)selectedBackgroundView;
-(void)removeEditingData;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(void)setWasSwiped:(BOOL)arg1 ;
-(void)_setMultiselecting:(BOOL)arg1 ;
-(BOOL)_needsSetup;
-(void)_setSeparatorHidden:(BOOL)arg1 ;
-(CGRect)_separatorFrame;
-(void)_setAccessoryViewsHidden:(BOOL)arg1 ;
-(void)setFocusStyle:(long long)arg1 ;
-(UILabel *)detailTextLabel;
-(void)_setShowsReorderControl:(BOOL)arg1 ;
-(BOOL)_usesModernAccessoriesLayout;
-(void)_setShouldIndentWhileEditing:(BOOL)arg1 ;
-(long long)focusStyle;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(id)_textLabel;
-(double)selectionFadeDuration;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(void)_setUsesModernAccessoriesLayout:(BOOL)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(UIView *)multipleSelectionBackgroundView;
-(BOOL)_changesOpaqueStateOfSubviews;
-(id)_backgroundView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(void)_updateSeparatorContent:(BOOL)arg1 ;
-(long long)editingAccessoryType;
-(void)setEditingAccessoryType:(long long)arg1 ;
-(UIView *)editingAccessoryView;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)_setOverriddenDefaultContentViewLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)_selectedBackgroundView:(BOOL)arg1 ;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(BOOL)showingDeleteConfirmation;
-(id)_editControlFocusGuide;
-(double)textFieldOffset;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(BOOL)_canDrawContent;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(id)_reorderControlFocusGuide;
-(void)_setEditControlFocusGuide:(id)arg1 ;
-(void)_setReorderControlFocusGuide:(id)arg1 ;
-(void)_setBadgeFont:(id)arg1 ;
-(BOOL)clipsContents;
-(UIImageView *)imageView;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setEditAction:(SEL)arg1 ;
-(void)_contentViewLabelTextDidChange:(id)arg1 ;
-(long long)_dropState;
-(id)_editableTextField:(BOOL)arg1 ;
-(id)_multiselectBackgroundColor;
-(id)_disclosureChevronImage;
-(void)_saveOpaqueViewState:(id)arg1 ;
-(double)_verticalPaddingForSeparator;
-(SEL)accessoryAction;
-(void)_setSwiped:(BOOL)arg1 ;
-(void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1 ;
-(id)_swipeContainerView;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(long long)_cellStyle;
-(BOOL)_shouldHideSeparator;
-(double)_rightMarginWidth;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)_updateImageViewTintColor;
-(void)didMoveToSuperview;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldUseHighlightedOrSelectedAppearance;
-(void)_showMenuFromLongPressGesture;
-(void)_updateDefaultImageSymbolConfiguration;
-(double)_roundedGroupCornerRadius;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_shouldMaskToBoundsWhileAnimating;
-(void)_setContentClipCorners:(unsigned long long)arg1 updateCorners:(BOOL)arg2 ;
-(BOOL)_appliesMaskingToBackgroundConfiguration;
-(void)_updateSeparatorContent;
-(void)_setNeedsSeparatorUpdate;
-(BOOL)_showFullLengthTopSeparatorForTopOfSection;
-(void)_updateSeparatorViewAlpha;
-(BOOL)_hidesBottomSeparatorWhenUnselected;
-(void)_updateTopSeparatorViewAlpha;
-(id)_addSeparatorWithFrame:(CGRect)arg1 ;
-(BOOL)_showSeparatorAtTopOfSection;
-(CGRect)_topSeparatorFrame;
-(void)_setMarginWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(id)_subviewsForFloatingContentView;
-(void)_releaseTextLabel;
-(void)_releaseDetailTextLabel;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)_updateContentClip;
-(long long)_popoverControllerStyle;
-(void)_setupTableViewCellCommon;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(id)_detailTextLabel;
-(BOOL)_isInModalViewController;
-(id)_createDefaultContentView;
-(void)_setupModernAccessoriesLayout;
-(void)_setNeedsSetup:(BOOL)arg1 ;
-(void)_setupMenuGesture;
-(id)_existingSystemAccessoryViews;
-(void)_didCreateContentView;
-(void)_setFont:(id)arg1 layout:(BOOL)arg2 ;
-(void)_setNeedsAccessoriesUpdate;
-(void)_resetContentViews;
-(void)_clearPrimaryTextFrameDidChangeHandlerForContentView:(id)arg1 ;
-(void)_delayedDeselect;
-(void)_setDragState:(long long)arg1 ;
-(void)_setReordering:(BOOL)arg1 ;
-(void)_setupPrimaryTextFrameDidChangeHandlerForContentView:(id)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
-(void)_setupSelectedBackgroundView;
-(void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSwipeContainerView:(id)arg1 ;
-(void)_setDrawsTopSeparator:(BOOL)arg1 ;
-(void)_resetSelectionTimer;
-(void)_resetEditControlRotation;
-(void)setUserInteractionEnabledWhileDragging:(BOOL)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(id)preferredFocusedView;
-(void)_updateHighlightColors;
-(id)_existingSystemAccessoryView:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<UIContentConfiguration>)contentConfiguration;
-(BOOL)isHighlighted;
-(BOOL)_shouldChangeOpaqueStateOfView:(id)arg1 ;
-(void)_applySelectedStateToSeparators:(BOOL)arg1 ;
-(id)selectedTextColor;
-(void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1 ;
-(void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2 ;
-(void)_updateDefaultLabelsForFocus:(BOOL)arg1 ;
-(void)_updateUserInteractionEnabledForNewDragState:(long long)arg1 ;
-(void)_willTransitionToState:(unsigned long long)arg1 ;
-(void)_cancelInternalPerformRequests;
-(void)_setAnimating:(BOOL)arg1 ;
-(BOOL)userInteractionEnabledWhileDragging;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_updateCellForCurrentBackgroundConfiguration;
-(void)_deselectAnimationFinished;
-(void)_setDropTarget:(BOOL)arg1 ;
-(void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateAccessoryMetrics;
-(void)_setTableView:(id)arg1 ;
-(void)_updateDefaultAccessoryViewForFocus:(BOOL)arg1 ;
-(long long)style;
-(id)_accessoryManager;
-(long long)indentationLevel;
-(void)_updateFloatingContentControlStateAnimated:(BOOL)arg1 ;
-(void)_didTransitionToState:(unsigned long long)arg1 ;
-(void)_setConstants:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateExpansionButton:(id)arg1 forType:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_syncAccessoryViewsIfNecessary;
-(void)_setRightMarginWidth:(double)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(id)_badgeColor;
-(BOOL)_updateExpansionButtonFromType:(long long)arg1 toType:(long long)arg2 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)_removeFromSuperviewIgnoringFirstResponder:(BOOL)arg1 ;
-(void)_setFrame:(CGRect)arg1 skipLayout:(BOOL)arg2 ;
-(CGRect)frame;
-(id)_dropAnimationContainerView;
-(void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2 ;
-(void)_layoutFloatingContentView;
-(void)_restoreLabelTextAfterSystemTextSizeChangeIfNeeded;
-(id)_editableTextField;
-(void)_setSectionLocation:(int)arg1 animated:(BOOL)arg2 forceBackgroundSetup:(BOOL)arg3 ;
-(void)_removeRemoveControl;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3 ;
-(id)_accessoryViewForType:(long long)arg1 ;
-(id)_newAccessoryView:(BOOL)arg1 ;
-(id)_defaultAccessoryView;
-(void)_clearOpaqueViewState:(id)arg1 ;
-(void)_multiselectColorChanged;
-(void)_systemTextSizeChanged;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(BOOL)_isDropTarget;
-(double)_contentConfigurationPrimaryTextInsetFromCellLeadingEdge;
-(BOOL)_isReorderable;
-(double)_imageViewExtentFromCellLeadingEdge;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_removeFocusedFloatingContentView;
-(id)_separatorEffect;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(id)accessoryActionPreviewingSegueTemplateStorage;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)_setDefaultBackgroundColor:(id)arg1 ;
-(void)setSelectionSegueTemplate:(id)arg1 ;
-(void)_setAccessoryManager:(id)arg1 ;
-(UIEdgeInsets)_backgroundSeparatorInset;
-(id)selectionSegueTemplate;
-(void)_setNeedsAccessoriesUpdateForced:(BOOL)arg1 ;
-(long long)_sanitizedEditingStyleForEditing:(BOOL)arg1 style:(long long)arg2 ;
-(id)_editControlAccessoryForStyle:(long long)arg1 ;
-(long long)_focusTouchSensitivityStyle;
-(BOOL)_editControlShouldBeOnLeadingSideForStyle:(long long)arg1 ;
-(id)accessoryActionSegueTemplate;
-(id)_leadingAccessoriesForEditing:(BOOL)arg1 style:(long long)arg2 ;
-(BOOL)_drawsTopSeparatorDuringReordering;
-(id)_trailingAccessoriesForType:(long long)arg1 view:(id)arg2 editing:(BOOL)arg3 style:(long long)arg4 ;
-(void)setSelectedTextColor:(id)arg1 ;
-(void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1 ;
-(void)setAccessoryActionSegueTemplate:(id)arg1 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_willEnterReusePool;
-(void)_setBadgeText:(id)arg1 ;
-(id)_checkmarkImage;
-(BOOL)_shouldHaveFullLengthBottomSeparator;
-(void)_encodeBackgroundColorWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setDropState:(long long)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(BOOL)_shouldHaveFullLengthTopSeparator;
-(id)_forSpringBoardDefaultSelectedBackgroundView;
-(void)setSectionBorderColor:(id)arg1 ;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(BOOL)shouldIndentWhileEditing;
-(UICellConfigurationState *)configurationState;
-(void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1 ;
-(id)sectionBorderColor;
-(id)editingData:(BOOL)arg1 ;
-(BOOL)_ignoresMultipleSelectionDuringEditing;
-(CGRect)reorderRectForBounds:(CGRect)arg1 ;
-(void)_setSelectionGrouping:(int)arg1 ;
-(void)_setIgnoresMultipleSelectionDuringEditing:(BOOL)arg1 ;
-(CGRect)accessoryRectForBounds:(CGRect)arg1 ;
-(void)_updateShowingSelectedBackground;
-(BOOL)isAtLeastHalfSelected;
-(float)selectionPercent;
-(void)_macSidebarDefaultIconSizeChanged;
-(id)selectedOverlayView;
-(void)setClipsContents:(BOOL)arg1 ;
-(BOOL)_highlightsAlongsideDefaultEffect;
-(void)_transitionToReorderingAppearance:(BOOL)arg1 ;
-(void)setHidesAccessoryWhenEditing:(BOOL)arg1 ;
-(void)_updateAccessoriesIfNeeded;
-(void)_finishTransitioningToReorderingAppearance:(BOOL)arg1 ;
-(void)_setAccessoryTintColor:(id)arg1 ;
-(BOOL)showsReorderControl;
-(void)_updateDefaultBackgroundAppearance;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(BOOL)hidesAccessoryWhenEditing;
-(void)_setDropAnimationContainerView:(id)arg1 ;
-(void)_updateDefaultIndentationWidth;
-(void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3 ;
-(void)_setSkipsLayout:(BOOL)arg1 ;
-(void)setAccessoryAction:(SEL)arg1 ;
-(CGRect)contentRectForState:(unsigned long long)arg1 ;
-(void)_setReorderControlImage:(id)arg1 ;
-(id)_reorderControlImage;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(void)_setEditingControlTintColor:(id)arg1 forStyle:(long long)arg2 ;
-(void)_removeFloatingSeparator;
-(void)_highlightDidEndForInteraction:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)_systemBackgroundView;
-(void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_setIndexPath:(id)arg1 ;
-(void)_setNeedsConfigurationStateUpdate;
-(/*^block*/id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(long long)arg2 ;
-(void)_removeInnerShadow;
-(BOOL)_isReorderControlActive;
-(BOOL)_grabberBeganReorder:(id)arg1 touch:(id)arg2 ;
-(void)_grabberReleased:(id)arg1 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)_toggleExpansionButton;
-(void)setNeedsUpdateConstraints;
-(UILabel *)textLabel;
-(void)_setAccessoryAction:(SEL)arg1 ;
-(SEL)_accessoryAction;
-(void)_setNeedsHeightCalculation:(BOOL)arg1 ;
-(double)_indexBarExtentFromEdge;
-(void)_prepareHighlightForInteraction:(id)arg1 ;
-(long long)_preferredHighlightAnimationStyleForInteraction:(id)arg1 ;
-(BOOL)_needsHeightCalculation;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_startToEditTextField;
-(BOOL)_isHighlighted;
-(BOOL)_isMultiselecting;
-(NSDirectionalEdgeInsets)_overriddenDefaultContentViewLayoutMargins;
-(id)initWithCoder:(id)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(BOOL)_isDeleteAnimationInProgress;
-(void)_setDeleteAnimationInProgress:(BOOL)arg1 ;
-(void)setTextFieldOffset:(double)arg1 ;
-(void)setPlaceHolderValue:(id)arg1 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)setReturnAction:(SEL)arg1 ;
-(BOOL)_separatorHidden;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(id)_contentViewConfiguration;
-(BOOL)_separatorDrawsInVibrantLightMode;
-(long long)_separatorBackdropOverlayBlendMode;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(BOOL)_accessoryViewsHidden;
-(void)_setAllowsReorderingWhenNotEditing:(BOOL)arg1 ;
-(void)_setCurrentScreenScale:(double)arg1 ;
-(void)_resetRawLayoutMargins;
-(void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1 ;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(void)dragStateDidChange:(long long)arg1 ;
-(BOOL)_usingBackgroundViewConfiguration;
-(void)_resetBackgroundViewsAndColor;
-(unsigned long long)currentStateMask;
-(void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1 ;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(BOOL)_isShowingCompactContextMenu;
-(id)selectionTintColor;
-(void)_updateContentViewConfigurationForState:(id)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)_setHiddenForReuse:(BOOL)arg1 ;
-(id)_encodableSubviews;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_layoutSystemBackgroundView;
-(void)_setIndentationWidth:(double)arg1 ;
-(void)_resetBackgroundViewConfiguration;
-(void)setEditingStyle:(long long)arg1 ;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(id)_accessoryTintColor;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(id)selectedImage;
-(void)_ensureFocusedFloatingContentView;
-(void)setLayoutManager:(id)arg1 ;
-(void)setContentConfiguration:(id<UIContentConfiguration>)arg1 ;
-(id)_configurationState;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(BOOL)automaticallyUpdatesContentConfiguration;
-(void)setSelectionTintColor:(id)arg1 ;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(id)_containerView;
-(/*^block*/id)_contentViewConfigurationProvider;
-(id)_textLabel:(BOOL)arg1 ;
-(BOOL)_backgroundIsVerticallyInset;
-(id)_visiblePathForBackgroundConfiguration;
-(void)setNeedsUpdateConfiguration;
-(BOOL)canBecomeFirstResponder;
-(id)_editingControlTintColorForStyle:(long long)arg1 ;
-(double)_minimumCellAccessoryMargin;
-(UIEdgeInsets)_backgroundInset;
-(id)defaultContentConfiguration;
-(id)_defaultBackgroundConfiguration;
-(id)_detailTextLabel:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)_setRawLayoutMargins:(UIEdgeInsets)arg1 ;
-(id)_indexPath;
-(void)setIndentationWidth:(double)arg1 ;
-(BOOL)isEditing;
-(UIView *)contentView;
-(void)_setShowingCompactContextMenu:(BOOL)arg1 ;
-(BOOL)_isDragging;
-(int)sectionLocation;
-(unsigned long long)_viewConfigurationState;
-(void)removeFromSuperview;
-(NSString *)reuseIdentifier;
-(CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1 ;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(void)_setEditingStyle:(long long)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(unsigned long long)_maskedCornersForSystemBackgroundView;
-(id)_imageView:(BOOL)arg1 ;
-(UIBackgroundConfiguration *)backgroundConfiguration;
-(id)_backgroundViewConfiguration;
-(BOOL)_isReordering;
-(void)_setupBackgroundView;
-(void)_setBadgeColor:(id)arg1 ;
-(id)_accessoryView:(BOOL)arg1 ;
-(id)_contentBackgroundColor;
-(id)_separatorView:(BOOL)arg1 ;
-(void)setSelectedImage:(id)arg1 ;
-(int)_selectionGrouping;
-(void)setSelectionFadeDuration:(double)arg1 ;
-(void)_setSeparatorEffect:(id)arg1 ;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)_setDefaultLeadingMarginWidth:(double)arg1 ;
-(double)_defaultLeadingMarginWidth;
-(void)_setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)_defaultTrailingCellMarginWidth;
-(void)_setIndexBarExtentFromEdge:(double)arg1 ;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)_insetsContentViewsToSafeArea;
-(CGRect)textRectForContentRect:(CGRect)arg1 ;
-(void)_setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)_drawsSeparatorAtTopOfSection;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(BOOL)_drawsSeparatorAtBottomOfSection;
-(void)dealloc;
-(double)_separatorHeight;
-(UIEdgeInsets)_rawSeparatorInset;
-(double)_marginWidth;
-(BOOL)_skipsLayout;
-(SEL)returnAction;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)_shouldApplyReadableWidthInsets;
-(void)setHighlighted:(BOOL)arg1 ;
@end
