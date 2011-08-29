//
//  KeyValue_SearchLyrics.h
//  DynamicLyrics
//
 
#import <Foundation/Foundation.h>
 
@interface KeyValue_SearchLyrics : NSObject{
    NSString *ID;
    NSString *LyricsTitle;
    NSString *LyricsArtist;
}
 
@property (readwrite, copy) NSString *ID;
@property (readwrite, copy) NSString *LyricsTitle;
@property (readwrite, copy) NSString *LyricsArtist;
 
-(id)initWithID:(NSString*)nID initWithTitle:(NSString*)nLyricsTitle initWithArtist:(NSString*)nLyricsArtist;
 
@end
