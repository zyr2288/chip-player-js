import React, {PureComponent} from "react";
import FavoriteButton from "./FavoriteButton";

export default class Favorites extends PureComponent {
  render() {
    const favorites = this.props.favorites ? Object.keys(this.props.favorites) : [];
    return (
      <div>
        <h3>
          My Favorites <span>({favorites.length})</span>
        </h3>
        {
          favorites.length > 0 ?
            <div>
              {
                favorites.map((href, i) => {
                  const title = decodeURIComponent(href.split('/').pop());
                  return (
                    <div className="Search-results-group-item" key={i}>
                      <FavoriteButton favorites={this.props.favorites}
                                      toggleFavorite={this.props.toggleFavorite}
                                      href={href}/>
                      <a onClick={this.props.onClick(href)} href={href}>{title}</a>
                    </div>
                  );
                })
              }
            </div>
            :
            <div>
              You don't have any favorites yet.<br/>
              Click the &#003; heart icon next to any song to save a favorite.
            </div>
        }
      </div>
    );
  }
}