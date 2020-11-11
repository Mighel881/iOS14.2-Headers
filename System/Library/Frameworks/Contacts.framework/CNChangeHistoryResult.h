/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNChangeHistoryAnchor, NSArray;

@interface CNChangeHistoryResult : NSObject <NSSecureCoding> {

	BOOL _changesTruncated;
	BOOL _unifyResults;
	CNChangeHistoryAnchor* _latestChangeAnchor;
	NSArray* _contactChanges;
	NSArray* _groupChanges;
	NSArray* _labeledValueChanges;

}

@property (assign,nonatomic) BOOL changesTruncated;                                   //@synthesize changesTruncated=_changesTruncated - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * latestChangeAnchor;              //@synthesize latestChangeAnchor=_latestChangeAnchor - In the implementation block
@property (nonatomic,retain) NSArray * contactChanges;                                //@synthesize contactChanges=_contactChanges - In the implementation block
@property (nonatomic,retain) NSArray * groupChanges;                                  //@synthesize groupChanges=_groupChanges - In the implementation block
@property (nonatomic,retain) NSArray * labeledValueChanges;                           //@synthesize labeledValueChanges=_labeledValueChanges - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                                       //@synthesize unifyResults=_unifyResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroupChanges:(NSArray *)arg1 ;
-(id)labeledValueChangesEnumeratorWithContactStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContactChanges:(NSArray *)arg1 ;
-(BOOL)enumerateGroupChangesFromContactStore:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)contactChangesEnumeratorWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(void)setChangesTruncated:(BOOL)arg1 ;
-(NSArray *)groupChanges;
-(NSArray *)contactChanges;
-(id)description;
-(NSArray *)labeledValueChanges;
-(BOOL)enumerateContactChangesWithKeysToFetch:(id)arg1 fromContactStore:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)changesTruncated;
-(BOOL)unifyResults;
-(id)initWithCoder:(id)arg1 ;
-(CNChangeHistoryAnchor *)latestChangeAnchor;
-(void)setUnifyResults:(BOOL)arg1 ;
-(id)groupChangesEnumeratorWithContactStore:(id)arg1 ;
-(void)setLabeledValueChanges:(NSArray *)arg1 ;
-(void)setLatestChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
@end
