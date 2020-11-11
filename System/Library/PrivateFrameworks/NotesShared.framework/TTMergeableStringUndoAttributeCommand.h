/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSString;

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand> {

	vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *> > >* _attributeRanges;

}

@property (nonatomic,readonly) vector<std::__1::pair<TopoIDRange* attributeRanges;              //@synthesize attributeRanges=_attributeRanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)addToGroup:(id)arg1 ;
-(NSString *)description;
-(vector<std::__1::pair<TopoIDRange*)attributeRanges;
-(void)applyToString:(id)arg1 ;
-(void)dealloc;
@end
