/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNAutocompleteFetchDelegate <NSObject>
@optional
-(void)autocompleteFetchDidFinish:(id)arg1;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1;

@required
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;

@end
