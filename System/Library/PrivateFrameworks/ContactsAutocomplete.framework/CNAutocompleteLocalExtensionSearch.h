/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CLSDataStore, NSString;

@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch> {

	CLSDataStore* _dataStore;

}

@property (nonatomic,readonly) CLSDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLSDataStore *)dataStore;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

