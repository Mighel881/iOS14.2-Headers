/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventDetailPredictedLocationCellDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class NSMutableArray, EKCalendarItemEditor, NSMutableDictionary, NSString;

@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem> {

	NSMutableArray* _locationsAndCells;
	EKCalendarItemEditor* _editor;
	BOOL _sourceSupportsAvailabilityRequests;
	NSMutableDictionary* _conferenceRoomInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_locationPlaceholder;
+(id)conferenceRoomNameForLocation:(id)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)forceTableReloadOnSave;
-(void)textFieldDidChange:(id)arg1 ;
-(void)reset;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)isInline;
-(void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2 ;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
-(void)_updateAvailabilityInformation;
-(BOOL)_showSuggestedLocation:(id)arg1 ;
-(BOOL)isSubitemAtIndexSaveable:(unsigned long long)arg1 ;
-(BOOL)_showConferenceLocation:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2 ;
-(void)_clearLocation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_refreshConferenceRoomCell:(id)arg1 ;
-(void)_setEditor:(id)arg1 andAddScribbleInteractionToCellIfNecessary:(id)arg2 ;
-(void)_updateCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3 ;
-(id)_clearButtonView:(unsigned long long)arg1 ;
-(void)_updateAuxiliaryLocationsForNewLocation:(id)arg1 ;
-(void)_updateCalendarItemLocation;
-(id)participantForConferenceRoomName:(id)arg1 ;
-(id)locationCellPairForCell:(id)arg1 ;
-(void)_updateLocation:(id)arg1 withStructuredLocation:(id)arg2 ;
-(void)_updateLocation:(id)arg1 withConferenceRoom:(id)arg2 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)searchStringForEventAutocomplete;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)isSaveable;
-(void)_clearButtonTapped:(id)arg1 ;
-(void)dealloc;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
@end

