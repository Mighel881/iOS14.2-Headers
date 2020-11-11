/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSHistoryVisitPredicate.h>

@class WBSSetInt64, NSString;

@interface WBSHistoryVisitsWithItemsPredicate : NSObject <WBSHistoryVisitPredicate> {

	WBSSetInt64* _itemIdentifiers;
	WBSSetInt64* _ignoredVisitIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithHistoryItems:(id)arg1 ignoreVisits:(id)arg2 ;
-(BOOL)evaluateVisit:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)evaluateServiceVisit:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
